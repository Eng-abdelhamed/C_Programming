#include<iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
node *head = NULL;
void insertnode(int value)
{
  node  *newnode,*last;
  newnode =new node;
  newnode->data = value;
  if(head == NULL)
  {
   head = newnode;
   newnode->next =NULL;
  }
  else
  {

   last = head;
   while(last->next != NULL)
   {
    last = last->next;
   }
   last->next =newnode;
   newnode->next =NULL;
  }
}
void display()
{
 node*currentnode = head;
 if(head ==NULL)
 {
  cout<<"list is empty \n";
 }
 else
{
  while(currentnode!=NULL)
  {
    cout<<currentnode->data<<" ";
    currentnode = currentnode->next;
  }
  cout<<endl;
 }
}
void deletenode(int value)
{
 node*current;
 node*previous;
 current = head;
 previous =head;
 if(current->data == value)
 {
   head =  current -> next;
   free(current);
   return;
 }
 while(current->data != value)
 {
   previous = current;
   current = current->next;
 }
 previous->next = current->next;
 free(current);
}
void insertbeg(int value)
{
  node *newnode;
  newnode = new node;
  newnode->data = value;
  newnode->next = head;
  head = newnode;
}

void deletebegining()
{
 if(head == NULL)
 {
    cout<<"Linked list is empty \n";
 }
 else
 {
  node *firstnode;
  firstnode = head;
  head = firstnode->next;
  delete(firstnode);
 }
}
void deleteend()
{
    if(head == NULL)
    {
        cout<<"linked list is empty\n";
    }
    else if(head->next == NULL)
    {
        delete(head);
        head = NULL;
    }
    else
    {
        node*ptr = head;
        while(ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete(ptr->next);
        ptr->next =NULL;
    }

}
int main()
{
insertnode(5);
insertnode(6);
insertnode(8);
insertbeg(6);
display();
deletebegining();
display();
deleteend();
display();
}