#pragma warning(disable:4996)
#include<stdio.h>
#define SIZE 5

double get_avg(int *values, int n) {
//double get_avg(int values[i], int n)
	int i; 
	double sum = 0.0;
	for (i = 0; i < n; i++)
		sum += *(values + i);
	//sum += values[i];
	return sum / n;

}

int main(void)
{
	int i,data[5];
	double result;

	for (i = 0; i < SIZE; i++) {
		printf("���� �Է��Ͻÿ� : ");
		scanf("%d", &data[i]);
	}

	result = get_avg(data, SIZE);
	printf("������ ��� = %.2f\n",result);


	getchar();
	getchar();

	return 0;
}
