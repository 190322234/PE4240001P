#include <time.h>
#define Num 10
int A[10]={0};
int main()   
{ 
   
    RandomNum();              
    printf("\n"); 
    
    InSort(A, Num);         
    PrintInSort(A, Num);     
    printf("\n"); 
    system("PAUSE");
    return(0);
}

RandomNum() 
{
  int i;
  srand((unsigned)time(NULL));
  for (i = 1; i <= Num; i++)
    {
       A[i] = rand() % 90+10;  //10 to 100 random number
       printf("%4d",A[i]);
    }
}

InSort(int A[], int n) 
 {
   int i, j, Temp;
   for (i = 1; i <= n; i++)
    {
     Temp=A[i];
     j=i-1;
     while (Temp<A[j])
      {
        A[j+1]=A[j];
        j--;
        if(j==-1)
          break;
      }
      A[j+1]=Temp;
    }
 }
 
PrintInSort(int A[], int n)
 {
    int i;
    for (i = 1; i <= Num; i++)
    {
      printf("%4d",A[i]);
    }   
}

