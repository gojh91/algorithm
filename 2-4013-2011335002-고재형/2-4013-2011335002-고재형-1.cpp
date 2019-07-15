#pragma warning(disable:4996)
#include<stdio.h>

void swap(int *a, int *b);

int main(void)
{
	int num1, num2, temp;


	printf("두수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);

	swap(&num1, &num2);

	printf("결과 : %d %d\n", num1 , num2);
	
	getchar();
	getchar();

	return 0;
}

void swap(int *a, int *b) {
	int temp;
	if (*a > *b) {
		temp = *a;
		*a = *b;
		*b = temp;
	}
}