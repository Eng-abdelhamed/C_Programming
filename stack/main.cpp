#include <iostream>
using namespace std;
# define size 100
int stack[size];
int top = -1;
void push(int value);
int pop();
int peak();
void display();
int main()
{
    push(5);
     push(4);
     push(3);
     display();
     cout<<"the peak value is :"<<peak();
      push(5);
     push(4);
     push(3);
     display();
     cout<<"the peak value is :"<<peak();
}
void push(int value)
{
    if(top == size -1)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        top++;
        stack[top] = value;
    }
}
int pop()
{
    if(top == -1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        return stack[top--];
    }
}
int peak()
{
   if(top == -1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        return stack[top];
    }
}
void display()
{
    for(int i =top ;i >= 0 ;i--)
    {
        cout<<stack[i]<<"\n";
    }


}
