//==================================================================
//Author: James Anthony Ortiz
//File: class_enum.cpp
//Description: Useing enum classes with user defined types in cpp.
//Compile: g++ -std=c++11 -Wall -Wextra class_enum.cpp -o class_enum
//==================================================================

#include <iostream>

enum class Color{red, blue, green};
enum class Traffic_light{green, yellow, red};
Color col = Color::red;

//Prefix Increment:
Traffic_light& operator++(Traffic_light& t){
  //Switch statement to simulate Traffic light pattern:
  switch(t){
  case Traffic_light::green: return t= Traffic_light::yellow;
  case Traffic_light::yellow: return t = Traffic_light::red;
  case Traffic_light::red: return t = Traffic_light::green;
  default: return t = Traffic_light::green;
  }
}//end Prefix Inc

int main(void){
  Traffic_light light = Traffic_light::red;
  Traffic_light next = ++light;

  //Supposed to print "green" selection:
  if(next == Traffic_light::green)
    std::cout << "Traffic light is green"  << std::endl;
  else if(next == Traffic_light::yellow)
    std::cout << "Traffic light is yellow" << std::endl;
  else
    std::cout << "Traffic light is red" << std::endl;
}
