#pragma warning(disable:4996)
#include<stdio.h>

int main(void) {
	int num[2], temp;
		
	printf("�� �� �Է�:");
	scanf("%d %d", &num[0], &num[1]);
		
	if (num[0] > num[1]) {
		temp = num[0];
		num[0] = num[1];
		num[1] = temp;
	}
	
	printf("��� = %d %d\n",num[0],num[1]);
	
	getchar();
	getchar();

	return 0;
}