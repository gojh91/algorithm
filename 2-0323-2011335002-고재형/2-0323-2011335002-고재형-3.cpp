#pragma warning(disable:4996)
#include<stdio.h>

#define SIZE 5

int main(void) {
	int grade[SIZE];
	int i, min;
	
	printf("******�ּڰ� ã��******\n");
	
	for (i = 0; i < SIZE; i++) {
		printf("���ڸ� �Է��ϼ���:");
		scanf("%d", &grade[i]);
	}
	min = grade[0];
	for (i = 0; i < SIZE; i++) {
		if (grade[i] < min)
			min = grade[i];
	}
	
	printf("[�ּڰ� = %d]\n", min);
	
	getchar();
	getchar();

	return 0;
}