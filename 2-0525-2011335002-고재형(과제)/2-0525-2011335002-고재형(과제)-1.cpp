#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 50

int z=1;
int temp[MAX];

void merge(int A[], int low, int mid, int high) {
	int i, m, k, l, j;
	
	l = low;
	i = low;
	m = mid + 1;

	printf("\n%dth 합병정렬\n", z);

	while ((l <= mid) && (m <= high)) {
		if (A[l] <= A[m]) {
			temp[i] = A[l];
			printf("왼 쪽 : temp[%d]=%d\n", i, A[l]);
			l++;
		}
		else {
			temp[i] = A[m];
			printf("오른쪽 : temp[%d]=%d\n", i, A[m]);
			m++;
		}
		i++;
	}

	if (mid < l) {
		for (k = m; k <= high; k++) {
			temp[i] = A[k];
			printf("오른쪽 : temp[%d]=%d\n", i, A[k]);
			i++;
		}
	}
	else {
		for (k = l; k <= mid; k++) {
			temp[i] = A[k];
			printf("왼 쪽 : temp[%d]=%d\n", i, A[k]);
			i++;
		}
	}
	for (k = low; k <= high; k++)
		A[k] = temp[k];
	
	printf("결과 : ");
	for (j = 0;j < i;j++)
		printf("%d ", temp[j]);
	printf("\n");

	z++;
}

void mergeSort(int A[], int low, int high) {
	int mid;
	if (low < high) {
		mid = (low + high) / 2;
		mergeSort(A, low, mid);
		mergeSort(A, mid + 1, high);
		merge(A, low, mid, high);
	}
}
int main(void) {
	int n, i, A[MAX];

	printf("배열 크기(원소 수) : ");
	scanf("%d", &n);
	printf("\n");
	printf("배열 원소 입력 : ");
	for (i = 0; i < n; i++)
		scanf("%d", &A[i]);

	mergeSort(A, 0, n - 1);

	printf("\n<정렬 결과>\n");
	for (i = 0; i < n; i++)
		printf("%d ", A[i]);
	//printf("\n<힙 결과>\n");
	//for (i = 0; i < n; i++)
	//	printf("%d ", A[i]);
	//printf("\n");

	//for (k = 0; k < n; k++)
	//	printf("%d ", A[k]);
	//printf("\n");


	getchar();
	getchar();

	return 0;
}
