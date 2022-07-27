//File: cmathstud.h
//Programmer: Maria Fernandez
//Date: 02/03/2022
//Class: Data Structures Using C++
//Instructor: Luciano Rodriguez

//Description:
//    This is the header file for the CMathStud class

#include "cquadratic.h"
#ifndef CMATHSTUD_HEADER
#define CMATHSTUD_HEADER

class CMathstud 
{
    public:
        CMathStud(int one, int two, int three = 0);
        ~CMathStud();
        
        double getMyValue(double x);
        
    private:
        CQuadratic QE;
};

#endif // CMATHSTUD_HEADER
