#pragma warning(disable:4996)
#include<stdio.h>

#define SIZE 5 

int main(void) {

	int list[SIZE] = { 5,4,3,2,1 };
	int i, j, k, min, temp;
	printf("정렬 전:");
		for (i = 0; i < SIZE; i++) 
		printf("%d", list[i]);
		printf("\n");

		for (i = 0; i < SIZE; i++) {
			min = i;

			for (j = i + 1; j<SIZE; j++)
				if (list[min]>list[j])
					min = j;

			temp = list[i];
			list[i] = list[min];
			list[min] = temp;

			printf("i=%d:", i);
			for (k = 0; k<5; k++)
				printf("%d", list[k]);
			printf("\n");
		}
		printf("정렬 후:");
		for (i = 0; i<SIZE; i++)
			printf("%d", list[i]);
		printf("\n");
	
	getchar();
	getchar();

	return 0;
}
