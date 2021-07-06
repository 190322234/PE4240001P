#include <stdio.h>
#include<stdlib.h>
void swap(int *,int *);
int main(void)
{
  int a=4,b=3;   
  swap(&a,&b);  
  printf("a = %d  b= %d\n",a,b);
  system("pause");     
}
void swap(int *x,int *y)
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}
