//
//Author: James Anthony Ortiz
//File: static_assert.cpp
//Description: Implementation of a static assert in C++ 
//Compile: g++ -std=c++11 -Wall -Wextra static_assert.cpp -o static_assert
//
#include <cassert>
constexpr double C = 299792.458; //Assisgned at compile-time.

void f(){
  constexpr double local_max = 160.0/(60*60);
  static_assert(local_max<C, "can't go that fast");
  //static_assert(local_max > C, "not true."); Uncomment to yeld a compiler error.
}//end f() demo-example function


//Main driver for example.
int main(void){

  f();
  return 0;
}//End MAIN
