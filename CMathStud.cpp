//File: cmathstud.cpp
//Programmer: Maria Fernandez
//Date: 02/03/2022
//Instructor: Luciano Rodriguez

//Description:
//    This is the source code file for the CMathStud class.

#include <iostream>
#include <cmath>
#include "cmathstud.h"

using namespace std;

CMathStud::CMathStud(int one, int two, int three) : QE(one, two, three) 
{
    cout << "CMathStud constructor!!!\n\n";
}

double CMathStud::getMyValue(double x)
{
    return QE.Evaluate(x);
}
