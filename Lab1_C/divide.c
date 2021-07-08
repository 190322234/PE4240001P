#include <stdio.h>

main(){
       
       int x=100;
       int q;
       int remainder;
       q=100;
       
       do{
           printf("current q= %d\n",q);
       remainder= q % 2;
       q=q/2;
       
       printf("remember = %d\n", remainder);
       printf("after q=%d\n", q);
      // push(x);
      getchar();
       }while (q>1);
       
       
    //   popup();
       
    //    printf("%d", q);
       
       printf("%d", x);
       
       getchar();
       
       }
