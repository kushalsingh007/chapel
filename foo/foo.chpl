
// Foo.step1.chpl : Here the value is known as compile time (Generic) 
proc foo(param a:int) {
  return a+3;
}

// Foo.step2.chpl  : Here a is not of the type param anymore (Non-Generic)
proc foo(a:int) {
  return a+3;
}

//Foo.step3.chpl : Not sure about how the return value types are calculated :/ 
//However theoretically this should not affect stuff
proc foo(a:int) : int {
  return a+3;
}

//Foo.step4.chpl : If the type of a is not specied anymore and so the function turns generic
proc foo(a:?t) {
  return a+3;
}

//Foo.step5.chpl : If the return type is also specified along is queried type
proc foo(a?t) : t {
  return a+3;
}

//Foo.step6.chpl : If the function is non-generic but also has other functions in return type are generic
proc foo(a:int) {
  return a+addOne(int)+addTwo(int); //Now let's say one case can be when the int parameter passed is changed to a float or something else
}

//Foo.step7.chpl : If the function has simple functions also included in the return type
proc foo(a:int) {
  return a+addOne()+addTwo();
}


//Foo.step8.chpl : Adding a class around a function : This change will surely need recompilation : But not sure how the codegen works right now
class MyClass{
  // <Insert the constructor and destructor + some other stuff (optional) 
  proc foo(a:int) {
    return a+3;
  }
}

//Foo.step9.chpl : Adding the function to a different module
module OurModule{
  proc foo(a:int) {
    return a+3;
  }
}

//Foo.step10.chpl : The parameter that is passed along is generic which in turn makes the function generic :/



/* Main function call */
foo(42); //Can be a known at compile time or not
