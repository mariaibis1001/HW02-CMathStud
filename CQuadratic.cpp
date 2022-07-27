//File: cquadratic.cpp
//Programmer: Maria Fernandez
//Date: 02/03/2022
//Class: Data Structures Using C++
//Instructor: Luciano Rodriguez

//Description:
//    This is the source code file for the CQuadratic class.

#include <iostream>
#include <cmath>
#include "cquadratic.h"

using namesapce std;

CQuadratic::CQuadratic(int one, int two, int three)
{
    cout << "CQuadratic constructor!!!\n\n";
    c1 = one;
    c2 = two;
    c3 = three;
}

CQuadratic::~CQuadratic()
{
    cout << "CQuadratic destructor!!!" << endl;
}

double CQuadratic::Evaluate(double x)
{
    double result = 0;
    result = (c1 * pow(x,2)) + (c2 * x) + c3;
  
    return result;
}
