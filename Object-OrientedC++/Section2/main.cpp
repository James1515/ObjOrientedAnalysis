//========================================================
//Author: James Anthony Ortiz
//File: main.cpp
//Description: Driver test program for class "Diver".
//========================================================

#include "dive.h"
#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[]) {

  //Create three Dive Objects:
  Dive D1(8.5, 3.0);
  Dive D2(9.0, 2.5);
  Dive D3(8.0, 3.3);

  //Display the dives:
  D1.Display();
  D2.Display();
  D3.Display();

  //Set the difficulty to 3.0:
  D2.SetDifficulty(3.0);

  //Display the dives again:
  std::cout << "\nChanging Dive 2\n";
  D1.Display();
  D2.Display();
  D3.Display();

  return 0;
}//END MAIN
