#include <stdio.h>
typedef struct node {
  int data;
  struct node *link;
} NODE;
NODE *NewNode(void);       
void PrintLists(NODE*);    
int main(void)
{   
       
    int i;
    char choice;
    NODE *head,*temp;      
    head = NewNode( );     
    temp = head;           
   
    printf("Input data¡G");
    scanf("%d",&head->data);
    for(i=1;i<=4;i++) 
    {
      printf("Input %d data¡G",i+1);
      temp->link = NewNode( );  
      scanf("%d",&temp->link->data);
      temp = temp->link;
    }
    temp->link = NULL;
    printf("=================Output======================\n");      
    PrintLists(head);   
    while(head != NULL) {
      NODE *temp;
      temp = head;
      head = head->link;
      free(temp);
    }
  system("pause");     
  return 0;
}
NODE *NewNode(void) 
{
  NODE *pt;
  pt = (NODE*)malloc(sizeof(NODE));
  if(pt== NULL ) {
    printf("Not enough memory!");
    exit(1);
  }
  return pt;
}

void PrintLists(NODE* head)  
{
  NODE *temp=head;
  printf("Linked list content is¡G");        
  while(temp != NULL)
  {
    printf("%d ",temp->data);
    temp = temp->link;
  }
  printf("\n");
}

