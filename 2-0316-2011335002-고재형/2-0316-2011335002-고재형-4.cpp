#pragma warning(disable: 4996)
#include <stdio.h>

int factorial(int);

int main(void) {

	int number, result;

	printf("input number:");
	scanf("%d", &number);

	result = factorial(number);

	printf("result = %d", result);
	
	getchar();
	getchar();

	return 0;
}

	int factorial(int n)
	{
		if (n == 1) return(1);
		else if (n >= 2)return(n*factorial(n - 1));
	}


