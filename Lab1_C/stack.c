//PUSH & POP OPERATION
#include<stdio.h>
void push(int [100]);
void pop(int [100]);
void display(int [100]);
int top=-1;
main()
{
int a[100],ch;
do
{
printf("\n\n Enter the choice that you need \n");
printf("\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT\n\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push(a);break;
case 2:pop(a);break;
case 3:display(a);break;
default:printf("\n\n\t Thank You!!!\n\n");break;
}
}while(ch<4);
}


void push(int a[100])
{
int item;
if(top>=100)
printf("\n |STACK OVERFLOW| \n");
else
{
printf("\n Enter the element: ");
scanf("%d",&item);
top++;
a[top]=item;
}
}



void pop(int a[100])
{
if(top==-1)
printf("\n |STACK UNDERFLOW| \n");
else
{
printf("\n The deleted element is %d \n",a[top]);
top--;
}
}



void display(int a[100])
{
int i;
if(top==-1)
printf("\n Stack is Empty \n ");
else
{
for(i=top;i>=0;i--)
printf("\n\t%d",a[i]);
printf("\n\n");
}
}
