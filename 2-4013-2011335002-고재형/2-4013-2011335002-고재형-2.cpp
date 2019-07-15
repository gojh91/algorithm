#pragma warning(disable:4996)
#include<stdio.h>



int main(void)
{
	int num[] = { 30, 40, 50 };

	printf("num = %d\n", num);
	printf("num + 1 = %d\n", num+1);
	printf("num + 2 = %d\n\n", num+2);
	printf("&num[0] = %d\n", &num[0]);
	printf("&num[1] = %d\n", &num[1]);
	printf("&num[2] = %d\n\n", &num[2]);
	printf("*num = %d\n", *num);
	printf("*num + 1 = %d\n",*num+1);
	printf("*(num + 1)= %d\n", *(num+1));
	printf("*num + 2 = %d\n", *num+2);
	printf("*(num + 2) = %d\n\n", *(num+2));
	printf("num[0] = %d\n", num[0]);
	printf("num[0]+1 = %d\n", num[0]+1);
	printf("num[1] = %d\n", num[1]);
	printf("num[0]+2 = %d\n", num[0]+2);
	printf("num[2] = %d\n", num[2]);


	getchar();
	getchar();

	return 0;
}

