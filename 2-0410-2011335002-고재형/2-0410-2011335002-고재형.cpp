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

	printf("<��� A> �� ��? �� ��? : ");
	scanf("%d %d", &i, &k);
	printf("<��� B> �� ��? �� ��? : ");
	scanf("%d %d", &l, &j);

	if (k == l) {
		l = 0;
		printf("��� A �Է� \n");
		for (i = 0; i < ROWS; i++) {
			for (j = 0; j < COLS; j++)
			scanf("%d", &A[i][j]);	
		}
		printf("��� B �Է� \n");
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
		printf("��� ��� C \n");
		for (i = 0; i < ROWS; i++) {
			for (j = 0; j < COLS; j++)
				printf("%d ", C[i][j]);
			printf("\n");
		};
		printf("\n");
		printf("���� ���� Ƚ�� = %d", l);
	}
	else {
		printf("��� A�� �� ���� ��� B�� �� �� ����ġ");
	}

	getchar();
	getchar();

	return 0;
}