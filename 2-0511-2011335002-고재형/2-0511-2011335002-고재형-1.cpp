#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	int n, CurrentElement, i, j, k, A[20];
	
	printf("배열 크기(원소 수) : ");
	scanf("%d",&n);
	printf("\n");
	printf("배열 원소 입력 : ");
	for (i = 0; i < n; i++)
		scanf("%d",&A[i]);

	for (i = 1; i <= n-1 ; i++) {
		CurrentElement = A[i];
		j = i - 1;
		while ((j >= 0) && (A[j]>CurrentElement)) {
			A[j + 1] = A[j];
			j = j-1;
		}
		A[j + 1] = CurrentElement;
		}
	printf("\n<정렬 결과>\n");
	for (i = 0; i < n; i++)
	printf("%d ",A[i]);
	
	getchar();
	getchar();

	return 0;
}
