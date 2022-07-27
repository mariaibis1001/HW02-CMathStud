//File: cquadratic.h
//Programmer: Maria Fernandez
//Date: 02/03/2022
//Class: Data Structures Using C++

//Decription:
//    This is the header file for the CQuadratic class.

#ifndef CQUADRATIC_HEADER
#define CQUADRATIC_HEADER

class CQuadratic
{
    public:
        CQuadratic(int one, int two, int three);
        ~CQuadratic();
        double Evaluate(double x);
        
    private:
        int c1;
        int c2;
        int c3;
};

#endif //CQUADRATIC_HEADER
