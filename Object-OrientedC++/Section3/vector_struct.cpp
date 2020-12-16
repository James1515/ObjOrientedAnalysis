//======================================================
//Author: James Anthony Ortiz
//File: vector_struct.cpp
//Description: An example of a vector class useing struct.
//Compile: gcc -std=c++11 vector_struct.cpp -o vectstruct
//=======================================================

#include <iostream>
struct Vector{
  int sz;
  double* elem;
};


void vector_init(Vector& v, int s){
  v.elem = new double[s];
  v.sz = s;
}

//Read "s" integers from cin and return their sum
//s is assumed to be positive:
double read_and_sum(int s){
  Vector v;
  vector_init(v, s);
  for(int i = 0; i!=s; i++){
    std::cin >> v.elem[i];
  }

  double sum = 0;
  for(int i = 0; i!=s; ++i){
    sum += v.elem[i];
  }

  return sum;
}//end function read_and_sum()

//Main driver for struct Vector:
int main(){
  double sum_result;
  std::cout << "Please enter 10 values: ";
  sum_result = read_and_sum(10); 
  std::cout << "The sum of 10 values is: " << sum_result << std::endl;

  return 0;
}//end MAIN
