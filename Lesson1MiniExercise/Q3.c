#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i=7;
 int j=7;
 
 prnow();
  
   printf("\n");
   system("PAUSE");
   return EXIT_SUCCESS;
}


prnow(){
        int i;int j;
     for(i=1;i<=7;i++){
  for(j=7-i;j>=1;--j)printf("*");
  printf("\n");
}

     }
