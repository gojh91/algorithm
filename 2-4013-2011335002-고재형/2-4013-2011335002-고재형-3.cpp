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
		printf("값을 입력하시오 : ");
		scanf("%d", &data[i]);
	}

	result = get_avg(data, SIZE);
	printf("값들의 평균 = %.2f\n",result);


	getchar();
	getchar();

	return 0;
}
