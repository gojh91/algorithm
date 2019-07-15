#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 20
int V[MAX][MAX];
int N = 4;
int W = 10;
int wei[MAX] = { 0,5,4,6,3 };
int val[MAX] = { 0,10,40,30,50 };

int max_num(int a, int b) {
	return (a > b) ? a : b;
}

int main(void) {
	int i, j;
	for (i = 0; i <= N; i++)
		V[i][0] = 0;
	for (j = 0; j <= W; j++)
		V[0][j] = 0;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= W; j++) {
			if (wei[i] > j)
				V[i][j] = V[i - 1][j];
			else V[i][j] = max_num(V[i - 1][j], V[i - 1][j - wei[i]] + val[i]);
		}
	}
	printf("\n최대 가치: %2d", V[N][W]);

	getchar();
	getchar();

	return 0;
}
