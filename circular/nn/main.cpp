#include <iostream>
#include <cstdlib>
using namespace std;
// circular queue
# define size 5
int queue[size];
int front = -1;
int rear  = -1;
bool isempty()
{
    if(front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isfull()
{
    if(rear == size -1 && front == 0 )
    {
        return true;
    }
    else if(rear == front -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int value)
{
    if(isfull())
    {
        cout<<"queue is full\n";
    }
    else
    {
        if(isempty())
        {
            front = rear = 0;
            queue[rear] =  value;
        }
        else if(rear == size -1)
        {
            rear = 0;
            queue[rear]  = value;
        }
        else
        {
            // rear ++ ;
            //queue[rear] = value;
            queue[++rear] =  value;
        }
    }
}
void dequeue()
{
    if(isempty())
    {
        cout<<"queue is empty\n";
    }
    else
    {
        if(front == rear )
        {
            front = rear = -1;
        }
        else if(front == size -1)
        {
            front = 0 ;
        }
        else
        {
            front++;
        }
    }
}
int peek()
{
    if(isempty())
    {
        cout<<"queue is empty\n";
        return -1;
    }
    else
    {
        return queue[front];
    }
}
void display()
{
    if(isempty())
    {
        cout<<"queue is empty \n";
    }
    else
    {
    if(front <= rear )
    {
        for(int i =  front ; i <=  rear ;i++)
        {
            cout<<queue[i]<<"\t";
        }
    }
    else
    {
         for(int i =front ;i<size;i++)
        {
            cout<<queue[i]<<"\t";
        }
         for(int i =0;i<=rear;i++)
        {
            cout<<queue[i]<<"\t";
        }
    }

    }
}
int main()
{
    enqueue(5);
    enqueue(6);
    enqueue(8);
    enqueue(4);
    enqueue(3);
    enqueue(3);
    display();
}

