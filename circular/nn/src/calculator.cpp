#include "calculator.h"
#include<calculator.h>
using namespace std;
#include<iostream>

calculator::calculator(float x, float y) : x(x)
{
 cout<<"hello\n";
}

calculator::~calculator()
{
                cout<<"goodbue";

}
float calculator:: add(float x , float y)
{
    return x+y;
}
float calculator:: add(float x , float y ,float z)
{
    return x+y+z;
}
 float calculator:: getx()
 {
     return x;
 }
