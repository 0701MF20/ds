//Q36.Illustrating the concept of queue using linked list.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct NODE
{
 int data;
 NODE *next;
};
class queue
{
 NODE *rear,*front;
 public:
 queue()
 {
  rear=NULL;
  front=NULL;
 }
void qinsert();
void qdelete();
void qdisplay();
~queue();
};
void queue::qinsert()
{
 NODE *temp=new NODE;
 cout<<"\n DATA : ";
 cin>>temp->data;
 temp->next=NULL;
 if(!rear)
 {
  rear=temp;
  front=temp;
 }
 else
 {
  rear->next=temp;
  rear=temp;
 }
}
void queue::qdelete()
{
if(front==NULL)
{
cout<<"QUEUE IS EMPTY\n";
}
else
{
NODE *ptr=front;
cout<<front->data<<"DELETED";
front=front->next;
delete ptr;
if(front==NULL)
rear=NULL;
}
}
/* if(!front)
 {
  NODE *temp=front;
  cout<<front->data<<endl<<"\n Element Deleted\n";
  front=front->next;
  delete temp;
  if(front==NULL)
  rear=NULL;
 }
 else
 cout<<"\n QUEUE EMPTY\n";
} */
void queue::qdisplay()
{
 NODE *temp=front;
 while(temp!=NULL)
 {
  cout<<temp->data<<endl;
  temp=temp->next;
 }
}
queue::~queue()
{
 while(!front)
 {
  NODE *temp=front;
  front=front->next;
  delete temp;
 }
}
void main()
{
 clrscr();
 queue qu;
 int choice;
 do
 {
  cout<<"\n  MAIN MENU\n";
  cout<<"\n 1. INSERTION";
  cout<<"\n 2. DELETION";
  cout<<"\n 3. DISPLAY";
  cout<<"\n 4. EXIT";
  cout<<"\n ENTER YOUR CHOICE : ";
  cin>>choice;
  switch(choice)
  {
   case 1:
   qu.qinsert();
   break;
   case 2:
   qu.qdelete();
   break;
   case 3:
   qu.qdisplay();
   break;
   case 4:
   break;
   default:
   cout<<"\n INVALID CHOICE!!!\n";
   break;
   }
  }while(choice<4);
 getch();
}
