use Memory;

_extern def chpl_malloc(number, size, description, userCode=true, lineno=-1, filename=""): opaque;
_extern def chpl_free(ptr, lineno=-1, filename="");

config var linenum: int = 0;
config var filename: string = "";

var freedInt = chpl_malloc(1, numBytes(int(64)), "int64_t", true, linenum, filename);
var unfreedFloat = chpl_malloc(1, numBytes(real(64)), "_real64", true, linenum, filename);

printMemTable(2, true, linenum, filename);
chpl_free(freedInt, linenum, filename);
writeln("And this is the memory hash table after the int variable has been freed:");
printMemTable(2, true, linenum, filename);
