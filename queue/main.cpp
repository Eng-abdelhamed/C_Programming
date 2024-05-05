#include <iostream>
#include <cstdlib>
using namespace std;
# define size 5
int queue[size];
int front =-1;
int rear=-1;

void enqueue(int value)
{
    if(rear != size -1)
    {
        if(rear == -1 && front == -1)
        {
            rear ++;
            front ++;
            queue[rear] =  value;
        }
        else
        {
            queue[++rear]=value;
        }
    }
    else
    {
        cout<<"queue is full\n";
    }
}
void dequeue()
{
    if(front != -1 && rear != -1 && front <= rear)
    {
        front ++;
    }
    else
    {
        cout<<"queue is empty \n";
    }
}
int peek()
{
     if(front != -1 && rear != -1 && front <= rear)
    {
        return queue[front];
    }
    else
    {
        cout<<"queue is empty \n";
        return -1;
    }
}
void display()
{
    if(front != -1 && rear != -1 && front <= rear)
    {
        for(int i = front; i <= rear ;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"queue is empty \n";
    }
}
