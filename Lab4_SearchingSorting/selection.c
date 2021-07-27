#include <time.h>
#define Num 10
int A[10]={0};
int main()   
{ 
  
    RandomNum();             
    printf("\n"); 
     
    SelSort(A, Num);         
    PrintSelSort(A, Num);     
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

SelSort(int A[], int n)  
 {
   int i, j, Temp, Min = 0;
   for (i = 1; i <= n - 1; i++)
    {
       Min = i;
       for (j = i + 1; j <= n; j++)
          if (A[j] < A[Min])
             Min = j;
      {
       Temp = A[i];
       A[i] = A[Min];
       A[Min] = Temp;
      }
    }
 }
 
PrintSelSort(int A[], int n)  
 {
    int i;
    for (i = 1; i <= Num; i++)
    {
      printf("%4d",A[i]);
    }   
}

