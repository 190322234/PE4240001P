main()
{ 

   int Sum;


   Sum = fact(5);
   printf("10!=1*2*...*10=%3d",Sum);  
   printf("\n"); 
   system("PAUSE");
   return(0);
}


int fact(int N)  
 {
   if (N==1)
     return 1;
   else
     return N * fact(N-1);
 }
