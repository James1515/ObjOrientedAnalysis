//======================================================
//Author: James Anthony Ortiz
//File: dive.h
//Description: Header file for the Diver class
//=======================================================

#include <iostream>
//CLASS Dive
class Dive {

  //Public functions
public:
  //Constructor:
  Dive(float avg, float diff);
  //Calculate the total amt.
  //of points the diver had scored:
  float CalcTotalPoints() const;
  //Display the result
  void Display() const;
  //Set Difficulty for Diver:
  void SetDifficulty(float diff);
  //Set the judge score:
  void SetJudgeScore(float score);

  //Private methods:
private:
  float judgeScore;
  float difficulty;
}; //END CLASS DIVE
