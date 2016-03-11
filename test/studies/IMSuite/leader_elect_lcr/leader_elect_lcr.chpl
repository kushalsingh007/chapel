 /* This file is part of IMSuite Benchamark Suite.

    This file is licensed to You under the Eclipse Public License (EPL);
    You may not use this file except in compliance with the License.
    You may obtain a copy of the License at
    http://www.opensource.org/licenses/eclipse-1.0.php

   (C) Copyright IMSuite 2013-present.
 */

 /*
    leader_elect_lcr aims to elect a leader from a set of nodes,
    on the basis of leader election algorithm by Le Lang et al..
    The algorithm is aimed towards unidirectional ring networks.

    @author Suyash Gupta
    @author V Krishna Nandivada

    Ported By: Kushal Singh
 */

 module leader_elect_lcr {

     config var inputFile = "inputLCR100.txt";
     config var outputFile = "outputLCR.txt";
     config var verify = false;

     var processes: int;
     var D : domain(1);
     var IdStore: [D] int;

     /* Parameters to enable execution with load */
     config var loadValue=0;
     var nval:[D] int;

    /*
        ```Process``` specifies the structure for each abstract node
        part of the Leader election algorithm.
    */
    class Process {
        var id: int;            // specifies the identifier for each node.
        var send: int;          // represents the identifier that the process will send to its neighbor.
        var leaderId: int;      // represents the identifier of the leader.
        var recievedId: int;    // represents the identifier that the process receives from its neighbor.
        var status: bool;       // represents the status of the process and will be set to true for leader.
     }

     /* Abstract node representation */
     var processSet: [D] Process;

    /*
        Acts as the starting point for the program execution.
        ```main``` performs the task of accepting the input from the user
        specified file, electing the leader and transmitting information,
        printing the output and validating the result.
    */
     proc main(){

        var inFile = open(inputFile, iomode.r);
        var reader = inFile.reader();
        processes = reader.read(int);
        D = {0..(processes-1)};

        for i in 0..(processes-1) {
            IdStore[i]=reader.read(int);
        }

        reader.close();
        inFile.close();

        initialize();

        for round in 0..processes-1 {
            leader_elect();
        }
        transmitLeader();
        printii();

        if(verify) then
            outputVerifier();

        if(loadValue != 0) {
			var sumval: real = 0;
            for i in 0..(processes-1) {
                    sumval = sumval + nval[i];
            }
			if(sumval > 0) then
                writeln();
		}
     }


	/* Initializes all the fields of the abstract node. */
	proc initialize() {
        forall i in 0..(processes-1) {
            processSet[i] = new Process();
            processSet[i].id = IdStore[i];
            processSet[i].leaderId = processSet[i].id;
            processSet[i].send = processSet[i].id;
            processSet[i].status = false;
        }
	}

    /*
        Aims to busy the threads by introducing the no-op instructions
        equivalent to the amount of load specified.
        :arg  weight:	Specifies the current load value for a thread.
        :type: int(64)
        :returns: Updated load value.
        :rtype: int(64)
    */
	proc loadweight(weight: int): int {
        var count = 0;
        for i in 0..(loadValue-1) {
                count+=1;
        }
        return count+weight;
    }

    /* Aims at selecting the leader from a set of nodes. */
    proc leader_elect() {
        forall i in 0..(processes-1) {
	        var x : int = (i + 1) % (processes);
		    var sval : int = processSet[i].send;
		    sendMessage(x, sval);

		    if(loadValue != 0) then
			    nval[i] = loadweight(nval[i]+i);
		}

        forall i in 0..(processes-1) {
			if(processSet[i].recievedId > processSet[i].leaderId) {
				processSet[i].send = processSet[i].recievedId;
				processSet[i].leaderId = processSet[i].recievedId;
			}
			else if(processSet[i].recievedId == processSet[i].id) {
				processSet[i].status = true;
				processSet[i].leaderId = processSet[i].id;
			}

			if(loadValue != 0) then
				nval[i] = loadweight(nval[i]+i);
	    }
    }

    /* Transmits the message from one node to another. */
    proc transmitLeader() {
        var leader : int;
        var k : int;
        forall i in 0..(processes-1) with (ref k) {
			if(processSet[i].status) then
				k=i+1;
        }

		leader = k;
		for i in 0..(processes-1) {
            k = (k+1)%processes;       //This loop has potential to be optimized
            setLeader(leader, k);
		}
		processSet[leader-1].leaderId = leader;
    }

    /* Sets the leader for a node.
        :arg uNode:	Leader node.
        :type: int(64)
        :arg aNode:	Node whose leader has to be set.
        :type: int(64)
    */
    proc setLeader(uNode: int, aNode: int) {
        processSet[aNode].leaderId = uNode;
    }

    /* Sends message to the neighbor.
        :arg receiver: Node which receives the message.
        :type: int(64)
        :arg sval: Message value.
        :type: int(64)
    */
    proc sendMessage(receiver: int, sval: int) {
		processSet[receiver].recievedId = sval;
    }

    /* Writes the output to the user specified file. */
    proc printii() {
        var outfile = open(outputFile, iomode.cw);
        var writer = outfile.writer();
        writer.writeln("Leader: " + processSet[0].leaderId);
        writer.close();
        outfile.close();
    }

    /* Validates the output resulting from the execution of the algorithm. */
    proc outputVerifier() {
        var max: int = -1;//Integer.min;
        for i in 0..(processes-1) {
            if(max < IdStore[i]) then
                max = IdStore[i];
        }
		if(max == processSet[(processSet[0].leaderId)-1].id) then
			writeln("Output verified");
    }
}
