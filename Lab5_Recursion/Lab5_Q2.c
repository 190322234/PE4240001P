#include <stdio.h>
#include<stdlib.h>
main(){


mystery(5);
 printf("r = %d\n",mystery(5));
  system("pause");  
}


int mystery(int b){
         if(b==0)
            return 0;
         if ((b%2)==0)
           return mystery(b-1)+3;
           else
           return mystery (b-1) +2;
           
           
         
}
