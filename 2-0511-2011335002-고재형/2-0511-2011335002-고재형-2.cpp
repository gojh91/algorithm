#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	int n, temp, i, j, h, k, A[20];
	
	printf("배열 크기(원소 수) : ");
	scanf("%d",&n);
	printf("\n");
	printf("배열 원소 입력 : ");
	for (i = 0; i < n; i++)
		scanf("%d",&A[i]);

	for (h =n/2 ; h>0; h = h / 2) {
		printf("\n");
		printf("간격 = %d", h);
		printf("\n");
		for (i = h; i < n; i++) {
			temp = A[i];
			j = i;
			while ((j >= h) && (temp < A[j-h])) {
				A[j] = A[j-h];
				j = j - h;
			}
			A[j] = temp;

			for (k = 0; k < n; k++)
				printf("%d ", A[k]);
			printf("\n");
		}
	}
	printf("\n<정렬 결과>\n");
	for (i = 0; i < n; i++)
	printf("%d ",A[i]);
	
	getchar();
	getchar();

	return 0;
}
