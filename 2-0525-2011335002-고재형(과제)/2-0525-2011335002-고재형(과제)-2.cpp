#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int A[10], n;

void Quicksort(int A[10], int left, int right) {
	int pivot, i, j, k, temp;

	if (left < right) {
		pivot = left;
		i = left;
		j = right;

		while (i < j) {
			while (A[i] <= A[pivot] && i < right)
				i++;
			while (A[j] > A[pivot])
				j--;
			if (i < j) {
				temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
		}
		printf("\n pivot_value= : %d, left = %d, right = %d",A[pivot],left,right);
		printf("\n 좌우 교환 결과 : ");
		for (k = 0; k < n; k++)
			printf("%d ", A[k]);
		printf("\n");
		temp = A[pivot];
		A[pivot] = A[j];
		A[j] = temp;
		printf(" 피벗 교환 결과 : ");
		for (k = 0; k < n; k++)
			printf("%d ", A[k]);
		printf("\n");


		Quicksort(A, left, j - 1);
		Quicksort(A, j + 1, right);
	}
}

int main(void) {
	int i;
	
	printf("배열 크기(원소 수) : ");
	scanf("%d",&n);
	printf("\n");
	printf("배열 원소 입력 : ");
	for (i = 0; i < n; i++)
		scanf("%d",&A[i]);

	Quicksort(A, 0, n - 1);

	printf("\n\n<정렬 결과>\n");
	for (i = 0; i < n; i++)
	printf("%d ",A[i]);
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
