#ifndef CALCULATOR_H
#define CALCULATOR_H
using namespace std;
#include<iostream>

class calculator
{
private :
    float x;
    public:
        float add(float x , float y);
        float add(float x , float y ,float z);
        float getx();
        calculator(float x, float y);
        ~calculator();



};

#endif // CALCULATOR_H
