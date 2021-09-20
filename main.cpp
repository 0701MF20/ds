#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
struct node
{
int info;
struct node* link;
}*start=NULL;
void create()
{
struct node *new1,*ptr;
new1=(struct node *)malloc(sizeof(struct node));
printf("\nEnter the element: ");
scanf("%d",&new1->info);
new1->link=NULL;
if(start==NULL)
{
 start=new1;
}
else
{
ptr=start;
while(ptr->link!=NULL)
{
ptr=ptr->link;
}
ptr->link=new1;
}
}
void display()
{
int i=0;
struct node* ptr;
if(start==NULL)
{
 printf("\nLinked List is empty\n");
 exit(0);
}
else
{
 ptr=start;
 printf("\nThe List elements are: ");
 while(ptr!=NULL)
 {
  if(i==1)
  printf("->");
  printf("%d",ptr->info);
  ptr=ptr->link;
  i=1;
  }
 }
}
int main()
{
int choice,ch;
while(1)
{
system("CLS");
printf("\nMENU \n");
printf("1.Create\n");
printf("2.Display\n");
printf("3.Press any key other than 1,2,3");
printf("\n----------------------------------\n");
printf("Enter your choice: ");
scanf("%d",&choice);
printf("\n----------------------------------\n");
switch(choice)
{
case 1:
do{
create();
printf("\nDo you want to enter more nodes then press 1 otherwise press any key:");
scanf("%d",&ch);
printf("\n--------------------------------------------------------------------------\n");
}while(ch==1);
printf("\nEnter any key for proceeding to other operations described in menu.");
break;
case 2:
	printf("\n");
display();
printf("\n--------------------------------------------------------------------------\n");
printf("\nEnter any key for proceeding to other operations described in menu.");
break;
default:
printf("\n Wrong choice:\n");
exit(0);
}
getch();
}
return 0;
}














