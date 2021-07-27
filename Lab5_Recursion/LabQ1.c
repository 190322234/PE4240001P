#include <stdio.h>
#include <math.h>
main(){


//n = 0: a0= 1
//-n nonzero and even: an= (an/2)2
//-n nonzero and odd: an= a¡P(an/2)2
int a=2;
int n=3;
int i;
int r;
for (i=0; i<n; i++){
    
    if((n%2)==0){
         r=*pow((double)a,(double)(n-1));
    }else{
         r=power((double)a,(double)(n)/2)*a;
         }
}

}
