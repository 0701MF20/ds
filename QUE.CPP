//Queue
//Q35. Illustrate the concept of queue using arrays through menu driven program.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class queue
{
 public:
 int q[5],front,rear,result;
 void enq();
 void dque();
 void disp();
 queue()
 {
  front=0;
  rear=0;
 }
};
void queue::enq()
{
 if(rear>=5)
 cout<<"\n Queue Overflow!!\n";
 else
 {
  cout<<"\n Enter The Number Inserted: ";
  cin>>q[rear];
  rear++;
 }
}
void queue::dque()
{
 if(rear==0)
 cout<<"\n Queue Underflow!!\n";
 else
 {
  cout<<"\n Element Removing: "<<q[front];
  if(front==rear)
  {
   front=0;
   rear=0;
  }
  else
   front++;
 }
}
void queue::disp()
{
 for(int i=0;i<=rear;i++)
 cout<<q[i]<<" ";
}
void main()
{
 clrscr();
 queue qu;
 int choice;
 do
 {
  cout<<"\n  MAIN MENU\n";
  cout<<"\n l. Insertion";
  cout<<"\n 2. Deletion";
  cout<<"\n 3. Display";
  cout<<"\n 4. Exit";
  cout<<"\n ENTER YOUR CHOICE : ";
  cin>>choice;
  switch (choice)
  {
   case 1:
   qu.enq();
   break;
   case 2:
   qu.dque();
   break;
   case 3:
   qu.disp();
   break;
   case 4:
   break;
   default:
   cout<<"\n INVALID CHOICE!!\n";
   break;
  }
 }while(choice<4);
 getch();
}
