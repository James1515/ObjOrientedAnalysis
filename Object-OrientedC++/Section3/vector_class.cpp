//===================================================================
//Author: James Anthony Ortiz
//File: vector_class.cpp
//Descrption: Class sample of a vector in cpp.
//Compile: g++ -std=c++11 -Wall -Wextra vector_class.cpp -o vect_class
//====================================================================

#include <iostream>
class Vector{
public:
  Vector(int s): elem{new double[s]}, sz{s} //Constructor for Vector, initializes the Vector members elem, and sz.
  {}
  double& operator[](int i){return elem[i];}  //provide element acess to substring
  int size() const{return sz;} //Returns size (number of elements in the vector)
  double read_and_sum(int s);
private:
  double* elem; //pointer to the elements
  int sz;
};//Class Vector


double read_and_sum(int s){
  Vector v(s); //Make a vector of s elements
  for(int i=0; i!=s; i++){ //Read into elements
    std::cin >> v[i];
  }

  double sum = 0;
  for(int i=0; i!=v.size(); i++){
    sum+=v[i]; //Take the summation of the elements
  }

  return sum; 
}//End read_and_sum() function


//Main Driver class:
int main(void){
  //Display message:
  std::cout << "Please enter 10 int values: ";
  double sum_ints;
  sum_ints = read_and_sum(10); //Read ten int values:
  std::cout << "The sum of ten ints is: " << sum_ints <<std::endl; //Display sum
  return 0;
}//end MAIN
