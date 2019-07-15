#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void DownHeap(int *arr, int i) {
	int j, n, temp, flag = 1;
	n = arr[0];

	while ((i * 2 <= n) && (flag == 1)) {
		j = i * 2;
		if ((j + 1 <= n) && (arr[j] < arr[j + 1]))
			j = j + 1;
		if (arr[j] < arr[i])
			flag = 0;
		else {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i = j;
		}
	}
}

void BuildHeap(int*arr) {
	int i, n;
	n = arr[0];
	for (i = n / 2; i >= 1; i--)
		DownHeap(arr, i);
}
int main(void) {
	int n, temp, i, j, k, A[20], last;
	
	printf("배열 크기(원소 수) : ");
	scanf("%d",&n);
	printf("\n");
	printf("배열 원소 입력 : ");
	for (i = 1; i <= n; i++)
		scanf("%d",&A[i]);

	A[0] = n;
	BuildHeap(A);

	printf("\n<힙 결과>\n");
	for (i = 1; i <= n; i++)
		printf("%d ", A[i]);
	printf("\n");
	while (A[0] > 1) {
		last = A[0];
		temp = A[1];
		A[1] = A[last];
		A[last] = temp;
		A[0]--;
		DownHeap(A, 1);

		for (k = 1; k <= n; k++) 
			printf("%d ", A[k]);
			printf("\n");
		
	}
	
	printf("\n\n<정렬 결과>\n");
	for (i = 1; i <= n; i++)
	printf("%d ",A[i]);
	
	getchar();
	getchar();

	return 0;
}
