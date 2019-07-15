#pragma warning(disable:4996)
#include<stdio.h>

#define SIZE 5

int main(void) {
	int grade[SIZE];
	int i, min;
	
	printf("******최솟값 찾기******\n");
	
	for (i = 0; i < SIZE; i++) {
		printf("숫자를 입력하세요:");
		scanf("%d", &grade[i]);
	}
	min = grade[0];
	for (i = 0; i < SIZE; i++) {
		if (grade[i] < min)
			min = grade[i];
	}
	
	printf("[최솟값 = %d]\n", min);
	
	getchar();
	getchar();

	return 0;
}