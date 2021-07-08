//PUSH & POP OPERATION
#include<stdio.h>
void push(int,int [100]);
void pop(int [100]);
void display(int [100]);
int top=-1;
main()
{
int x=100;
       int q;
       int remainder;
       q=100;
       int a[100]={0};
       int j;
       do{
           printf("current q= %d\n",q);
       remainder= q % 2;
       q=q/2;
       
       printf("remember = %d\n", remainder);
       printf("after q=%d\n", q);
       push(remainder,a);
      getchar();
       }while (q>1);
       
       display(a);
       for(j=0; j<10; j++){
              //  if(a[j]=1 || a[j]==0){
                 pop(a);
              //  }
       }
       getchar();
}


void push(int item,int a[100])
{
//int item;
if(top>=100)
printf("\n |STACK OVERFLOW| \n");
else
{
//printf("\n Enter the element: ");
//scanf("%d",&item);
top++;
a[top]=item;
}
}



void pop(int a[100])
{
if(top==-1){
//printf("\n |STACK UNDERFLOW| \n");
}else
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
