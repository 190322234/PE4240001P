#include<stdio.h>

	struct rec
	{
    		int i;
    		float PI;
    		char A;
	};

	int main()
	{
		struct rec *ptr_one;
		ptr_one =(struct rec *) malloc (sizeof(struct rec));

		ptr_one->i = 10;
    		ptr_one->PI = 3.14;
    		ptr_one->A = 'a';

    		printf("First value: %d\n", ptr_one->i);
    		printf("Second value: %f\n", ptr_one->PI);
    		printf("Third value: %c\n", ptr_one->A);

    		free(ptr_one);
        getchar();
   		return 0;
	}
