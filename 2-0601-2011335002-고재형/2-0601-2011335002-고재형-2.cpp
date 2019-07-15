#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int CoinChange(int arr[], int k, int n) {
	int C[MAX];
	int i, j, x;

	for (i = 1;i <= n;i++)
		C[i] = 100;

	C[0] = 0;

	for (j = 1;j <= n;j++) {
		for (i = 1;i <= k;i++) {
			if ((arr[i] <= j) && (C[j - arr[i]] + 1<C[j]))
				C[j] = C[j - arr[i]] + 1;
		}
	}
	return C[n];
}
int main(void) {
	int arr[] = { 0, 16, 10, 5, 1 };
	int k = sizeof(arr) / sizeof(arr[0]);
	int n = 20;
	int result = CoinChange(arr, k - 1, n);

	printf("�� ������ ���� = %d\n", result);

	getchar();
	getchar();

	return 0;
}