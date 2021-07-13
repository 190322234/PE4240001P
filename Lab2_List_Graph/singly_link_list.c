//Program by :- Pritesh A Taral
#include<stdio.h>
#include<conio.h>

//-------------------------------------------------
struct node
{
int data;
struct node *next;
}*start=NULL;
//------------------------------------------------------------
int main()
{
create();
display();
getchar();
return 0;
}
create()
{
char ch;
 do
 {
  struct node *new_node,*current;

  new_node=(struct node *)malloc(sizeof(struct node));

  printf("Enter the data : ");
  scanf("%d",&new_node->data);
  new_node->next=NULL;

  if(start==NULL)
  {
  start=new_node;
  current=new_node;
  }
  else
  {
  current->next=new_node;
  current=new_node;
  }

 printf("nDo you want to creat another : ");
 ch=getche();
 }while(ch!='n');
 
  getchar();
}
//------------------------------------------------------------------

display()
{
struct node *new_node;
 printf("The Linked List : n");
 new_node=start;
 while(new_node!=NULL)
   {
   printf("%d--->",new_node->data);
   new_node=new_node->next;
   }
  printf("NULL");
  getchar();
}
//----------------------------------------------------

//----------------------------------------------------
