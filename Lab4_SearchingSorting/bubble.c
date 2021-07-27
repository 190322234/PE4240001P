#include <time.h>
#define Num 10
int A[10]={0};
main()
{ 
    RandomNum();              
    printf("\n"); 
   
    BubSort(A, Num);          
    PrintBubSort(A, Num);     
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
       printf("%3d",A[i]);
    }
}


BubSort(int A[], int n)  
  {
    int i, j , k,t=1, Temp;
    for (i=n-1; i>0; i--)
       {
       for (j =0; j <=i; j++)
          if (A[j] > A[j+1])
             {  
               Temp = A[j];
               A[j] = A[j+1];
               A[j+1] = Temp;
             }          
       }
  }
  
PrintBubSort(int A[], int n)  
 {
    int i;
    for (i = 1; i <= Num; i++)
    {
      printf("%3d",A[i]);
    }   
}
