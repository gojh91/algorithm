#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int n, temp, i, j, A[20];
	
	printf("�迭 ũ��(���� ��) : ");
	scanf("%d",&n);
	printf("\n");
	printf("�迭 ���� �Է� : ");
	for (i = 0; i < n; i++)
		scanf("%d",&A[i]);
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n-i; j++) {
			if (A[j-1] > A[j]) {
				temp = A[j-1];
				A[j-1] = A[j];
				A[j] = temp;
			}
		}
	}

	printf("\n<���� ���>\n");
	for (i = 0; i < n; i++)
	printf("%d ",A[i]);



	getchar();
	getchar();

	return 0;
}
