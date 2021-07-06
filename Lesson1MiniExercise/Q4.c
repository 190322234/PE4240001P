#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5]={2,4,12,2};
    int i; int j;int sum=0;
 
 
 for (i=0; i<4; i++){
    // printf("%d", a[i]);
     sum=sum+a[i];
    // printf("%d", sum);
    // printf("\n");
     }   
   
   printf("%d", sum);
   getchar(); 
}
