use Grid_def;
use GridArray_def;


//|\"""""""""""""""""""""""""""|\
//| >    GridSolution class    | >
//|/___________________________|/
class GridSolution {

  const grid:     Grid;
  
  var old_data:     GridArray;
  var current_data: GridArray;
  var old_time:     real;
  var current_time: real;
  
  //|\''''''''''''''''|\
  //| >    clear()    | >
  //|/................|/
  def clear() {
    delete old_data;
    delete current_data;
  }
  // /|''''''''''''''''/|
  //< |    clear()    < |
  // \|................\|


  //==== Constructor ====
  def GridSolution(grid: Grid) {
    this.grid = grid;
    old_data =     new GridArray(grid = grid);
    current_data = new GridArray(grid = grid);
  }
}
// /|"""""""""""""""""""""""""""/|
//< |    GridSolution class    < |
// \|___________________________\|





//|\"""""""""""""""""""""""""""""""""""|\
//| >    GridSolution.setToFunction    | >
//|/___________________________________|/
//----------------------------------------------------------
// Sets both time levels to a particular analytic function.
//----------------------------------------------------------
def GridSolution.setToFunction(
  initial_condition: func(dimension*real, real),
  time_in:           real)
{

  //===> Evaluate and store initial_condition ===>
  write("Writing solution on grid...");

  old_data.setToFunction(initial_condition);
  old_time = time_in;
  
  current_data.setToFunction(initial_condition);
  current_time = time_in;
  write("done.\n");
  //<=== Evaluate and store initial_condition <===


}
// /|"""""""""""""""""""""""""""""""""""/|
//< |    GridSolution.setToFunction    < |
// \|___________________________________\|




//|\""""""""""""""""""""""""""""""""|\
//| >    GridSolution.clawOutput    | >
//|/________________________________|/
//-------------------------------------------------------------------
// Writes Clawpack-formatted output for a GridSolution, at the given
// frame_number.
//-------------------------------------------------------------------
def GridSolution.clawOutput(
  frame_number: int
){

  //==== Use clawOutput method for GridArray ====
  current_data.clawOutput(current_time, frame_number);

}
// /|""""""""""""""""""""""""""""""""/|
//< |    GridSolution.clawOutput    < |
// \|________________________________\|