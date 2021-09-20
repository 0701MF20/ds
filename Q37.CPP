Q37.Illustrating the concept of circular queue. 
#include<iostream.h> 
#include<conio.h> 
#include<stdio.h> 
#define size 4 

class cqueue 
{ 
int data[size]; 
int front,rear; 
public: 
cqueue() 
{ 
front=-1; 
rear=-1; 
} 
void insert(); 
void remove(); 
void display();
};
void cqueue::insert()
{ if(front==0&&rear==9||rear==front-1) 
cout<<"\n QUEUE FULL\n";
else 
{
if(rear==-1)
front=rear=0;
else if(rear==9)
rear=0;
else
rear++;
cout<<"\nENTER DATA: ";
cin>>data[size];
}
}
void cqueue::remove()
{
if(front==-1)
cout<<"\nCircular Queue is EMPTY\n";
else 
{
cout<<data[front]<<"DELETED"<<endl;
if(front==rear)
front=rear=-1;
else 
if(front==9)
front=0;
else 
front++; 
} 
}
void cqueue::display()
{  
if(rear<=front)
{ 
for(int i=front;i<=rear;i++) 
cout<<data[i]<<" "; 
} 
else 
} 
{ 
} 
for(i-front;i< size;1++) cout<<data[rear]<<" for(i=0;i<=rear;i++) cout<<data[i]<<" 
void main() { 
clrscr(); cqueue cq; hoice int c : do 
cout<<"\rMATN MEN 
cout<<"\nlo 7r 

VT 
0 

-a. 4.7fit 
• 

FT 0 
rtlon' 
cout<<"\n2 e. etion"; cout<<" s Dieplay"; cou <"\n49 Exit"; cout<<"\nENTER YOUR cin>>choice; 
switch (choice) 
case 1: cgainsert(); break; 
case 2: cq.remove(); break; 

case 3: cq.display(); break; 
47 
• 

CHOICE\n"; 
• 
• -env-as" - ' 

'rata-lawn 

71 


