//Q34.Illustrating the concept of stack using linked list.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#define size 5
struct node
{
 int data;
 node *next;
};
class stack
{
 node *top;
 public:
 stack()
 {
  top=NULL;
 }
 void push();
 void pop();
 void display();
 ~stack();
};
void stack::push()
{
 node *temp;
 temp=new node;
 cout<<"\n ENTER DATA: ";
 cin>>temp->data;
 temp->next=top;
 top=temp;
 }
 void stack::pop()
 {
  if(top!=NULL)
  {
   node *temp=top;
   top=top->next;
   cout<<temp->data<<"\n ELEMENT DELETED\n";
   delete temp;
  }
  else
   cout<<"\n STACK IS EMPTY\n";
 }
 void stack::display()
 {
  node *temp=top;
  while(temp!=NULL)
  {
   cout<<temp->data<<" ";
   temp=temp->next;
  }
 }
 stack::~stack()
 {
  while(top!=NULL)
  {
   node *temp=top;
   top=top->next;
   delete temp;
  }
 }
void main()
{
 clrscr();
 stack st;
 int choice;
 char ch;
 do
 {
  cout<<"\n  MAIN MENU\n";
  cout<<"\n l. Push";
  cout<<"\n 2. Pop";
  cout<<"\n 3. Display";
  cout<<"\n ENTER YOUR CHOICE :: ";
  cin>>choice;
  switch(choice)
  {
   case 1:
   st.push();
   break;
   case 2:
   st.pop();
   break;
   case 3:
   st.display();
   break;
   default:
   break;
  }
 }while(choice<4);
 getch();
}
