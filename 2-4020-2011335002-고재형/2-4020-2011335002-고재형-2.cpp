#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int n, min,temp, i, j, A[20];
	
	printf("�迭 ũ��(���� ��) : ");
	scanf("%d",&n);
	printf("\n");
	printf("�迭 ���� �Է� : ");
	for (i = 0; i < n; i++)
		scanf("%d",&A[i]);

	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i+1; j < n; j++) {
			if (A[min] > A[j]) 
				min = j;
			}
			temp = A[i];
			A[i] = A[min];
			A[min] = temp;
		}
	

	printf("\n<���� ���>\n");
	for (i = 0; i < n; i++)
	printf("%d ",A[i]);



	getchar();
	getchar();

	return 0;
}
