#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	int n, CurrentElement, i, j, k, A[20];
	
	printf("�迭 ũ��(���� ��) : ");
	scanf("%d",&n);
	printf("\n");
	printf("�迭 ���� �Է� : ");
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
	printf("\n<���� ���>\n");
	for (i = 0; i < n; i++)
	printf("%d ",A[i]);
	
	getchar();
	getchar();

	return 0;
}
