#pragma warning(disable:4996)
#include<stdio.h>

#define ROWS 3
#define COLS 3

int main(void) {
	int A[ROWS][COLS] = {
		{2,3,0},
		{8,9,1},
		{7,0,5}
	};
	int B[ROWS][COLS] = {
		{ 1,0,0 },
		{ 1,0,0 },
		{ 1,0,0 }
	};
	int C[ROWS][COLS];
	int i, j;

	for (i = 0; i < ROWS; i++) 
		for (j = 0; j < COLS; j++)
			C[i][j] = A[i][j] + B[i][j];
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++)
			printf("%d", C[i][j]);
		printf("\n");
	}
			
	getchar();
	getchar();

	return 0;
}
