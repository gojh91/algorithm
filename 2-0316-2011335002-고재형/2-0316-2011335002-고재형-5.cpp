#pragma warning(disable: 4996)
#include <stdio.h>

int Euclid(int a,int b);

int main(void) {

	int a, b, c;
		
	printf("두개의 정수를 입력하시오:");
	scanf("%d%d", &a, &b);
	
	c = Euclid(a, b);

	printf("최대 공약수는 %d입니다.\n", c);

	getchar();
	getchar();

	return 0;

}

	int Euclid(int a, int b)
	{
		if (b==0) return a;
		return Euclid(b, a % b);
	}


