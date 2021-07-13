#define NULL 0
typedef struct node
 {
    int data;
    struct node *link;
 }NODE;
NODE *NewNode(void);
int main(void)
 {
            
   int Node_data;
   NODE *list;
   list=NewNode();
    
   printf("Input data¡G");
   scanf("%d",&Node_data);
   list->data=Node_data;
   list->link=NULL;
   printf("=================Output======================\n");  
   printf("Content¡G%d\n",list->data);        
   system("PAUSE");             
   return(0);                        
 }
 
NODE *NewNode(void) 
{
  NODE *pt;
  pt = (NODE*)malloc(sizeof(NODE));  
  if(pt== NULL ) {
    printf("NOt enough memory!");
    exit(1);
  }
  return pt;
}
