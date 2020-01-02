//=======================================================
//StreamInput.cpp
//Author: James Anthony Ortiz
//Description: Write a program that takes in values from
//a user. Next, write all values to the output stream.
//Compile: g++ -Wall -W -o strem StreamInput.cpp
//=======================================================
#include <stdio.h>
#include <iostream>

int main()
{
  //Variable Declaration:
  unsigned idNumber;
  char firstName[30];
  char lastName[30];
  int hoursWorked;
  float hourlyPayRate;

  //Using cout and cin for input and output from user:

  std::cout << "Please enter idNumber: " << std::endl;
  std::cin >> idNumber;

  std::cout << "Please enter your first name: " << std::endl;
  std::cin >> firstName;

  std::cout << "Please enter your last name: " << std::endl;
  std::cin >> lastName;

  std::cout << "Please enter the amount of hours you have worked: " << std::endl;
  std::cin >> hoursWorked;

  std::cout << "Please enter the hourly pay rate: \n";
  std::cin >> hourlyPayRate;


  //Display values as output
  std::cout << "==============Information==============" << std::endl;
  std::cout << idNumber << std::endl;
  std::cout << firstName << std::endl;
  std::cout << lastName << std::endl;
  std::cout << hoursWorked << std::endl;
  std::cout << hourlyPayRate << std::endl;


  return 0;
}
