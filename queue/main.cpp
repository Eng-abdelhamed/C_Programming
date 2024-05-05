#include <iostream>
using namespace std;
# define size 5
int queue[size];
int front = -1;
int rear = -1;
bool isempty()
{
    if(front == -1 && rear == -1)
    {
        return true;
    }
    else
        return false;
}
bool isFull()
{
    if( front == 0 && rear == size - 1 )
    {
        return true;
    }
    else if(rear == front - 1)
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
    if(isempty())
    {
        cout<<"Queue is empty ."<<endl;
    }
    else
    {
        if(front == -1 && rear == -1)
        {
            front = rear = 0;
            queue[rear] = value;
        }
        else if(rear = size - 1)
        {
        rear =0 ;
        queue[rear] = value;

        }
        else
        {
        rear ++;
        queue[rear] = value;

        }
    }
}
void dequeue()
{
    if(isempty())
    {
        cout<<"Queue is empty ."<<endl;
    }
    else
    {
        if(front == rear )
        {
            front = rear - 1 ;
        }
        else if(front ==  size  -1 )
        {
            front = 0;
        }
        else
        {
            front ++;
        }

    }
}
int peak()
{
    if(isempty())
    {
        cout<<"Queue is empty .";
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
        cout<<"queue is empty.";
    }
    else
    {
        if(front <= rear)
        {
            for(int i = front  ;i<= rear ;i++)
            {
                cout<<queue[i]<<" ";
            }
        }
        else
        {
            for(int i = 0  ;i < size ;i++)
            {
                cout<<queue[i]<<" ";
            }
            for(int i = 0  ;i <= rear ;i++)
            {
                cout<<queue[i]<<" ";
            }

        }




    }





}
int main()
{

enqueue(10);
enqueue(15);
enqueue(20);
display();
}
