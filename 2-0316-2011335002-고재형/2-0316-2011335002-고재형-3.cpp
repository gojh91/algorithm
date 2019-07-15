#pragma warning(disable: 4996)
#include <stdio.h>



int main(void) {


	int x, y, r;

	printf("두개의 정수를 입력하시오:");
	scanf("%d%d", &x, &y);

	
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대 공약수는 %d입니다.\n", x);

	getchar();
	getchar();

	return 0;
}

