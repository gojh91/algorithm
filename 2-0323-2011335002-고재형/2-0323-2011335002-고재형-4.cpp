#pragma warning(disable:4996)
#include<stdio.h>

int main(void) {
	int num[2], temp;
		
	printf("두 수 입력:");
	scanf("%d %d", &num[0], &num[1]);
		
	if (num[0] > num[1]) {
		temp = num[0];
		num[0] = num[1];
		num[1] = temp;
	}
	
	printf("결과 = %d %d\n",num[0],num[1]);
	
	getchar();
	getchar();

	return 0;
}