//==============================================
//Author: James Anthony Ortiz
//File: dive.cpp
//Descrption: Member functions created for the
//dive class.
//==============================================

#include "dive.h"
#include <iostream>
Dive::Dive(float avg, float diff)
{
  SetJudgeScore(avg);
  SetDifficulty(diff);
}//end constructior DIVE()

void Dive::Display() const
{
  std::cout << "[Dive]: "
    << judgeScore << ", "
    << difficulty << ", "
    << CalcTotalPoints()
    << std::endl;
}//end mem. function Display()

void Dive::SetDifficulty(float diff)
{
  difficulty = diff;
}//end function SetDifficulty()

void Dive::SetJudgeScore(float score)
{
  judgeScore = score;
}//end function SetJudgeScore()

float Dive::CalcTotalPoints() const
{
  return judgeScore * difficulty;
}//end function CalcTotalPoints()
