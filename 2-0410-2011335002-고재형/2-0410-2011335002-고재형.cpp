#pragma warning(disable:4996)
#include<stdio.h>
#include <stdlib.h> 
#define ROWS 3
#define COLS 3


int main(void)
{
	int A[ROWS][COLS] = { 0 };
	int B[ROWS][COLS] = { 0 };
	int C[ROWS][COLS] = { 0 };
	int i, j, k, l= 0;

	printf("<행렬 A> 몇 행? 몇 열? : ");
	scanf("%d %d", &i, &k);
	printf("<행렬 B> 몇 행? 몇 열? : ");
	scanf("%d %d", &l, &j);

	if (k == l) {
		l = 0;
		printf("행렬 A 입력 \n");
		for (i = 0; i < ROWS; i++) {
			for (j = 0; j < COLS; j++)
			scanf("%d", &A[i][j]);	
		}
		printf("행렬 B 입력 \n");
		for (i = 0; i < ROWS; i++) {
			for (j = 0; j < COLS; j++)
			scanf("%d", &B[i][j]);	
		}
		for (i = 0; i < ROWS; i++)
			for (j = 0; j < COLS; j++)
				for (k = 0; k < COLS; k++) {
					C[i][j] = C[i][j] + A[i][k] * B[k][j];
					l++;
				};
		printf("\n");
		printf("결과 행렬 C \n");
		for (i = 0; i < ROWS; i++) {
			for (j = 0; j < COLS; j++)
				printf("%d ", C[i][j]);
			printf("\n");
		};
		printf("\n");
		printf("곱산 연산 횟수 = %d", l);
	}
	else {
		printf("행렬 A의 열 수와 행렬 B의 행 수 불일치");
	}

	getchar();
	getchar();

	return 0;
}