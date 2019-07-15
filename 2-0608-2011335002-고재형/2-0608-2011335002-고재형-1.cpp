#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 10

void knapsock(float capacity, int num, float weight[], float value[]) {
	float fraction[MAX] = { 0,0 };
	float W = 0, V = 0, C = capacity;
	int i = 0;

	while (W + weight[i] <= C) {
		fraction[i] = 1.0;
		W = W + weight[i];
		V = V + value[i];
		i++;
	}
	if (C > W) {
		fraction[i] = (C - W) / weight[i];
		V = V + (fraction[i] * value[i]);
	}
	printf("\n배낭 내 총 가치 = %.2f\n", V);
}

int main(void) {
	float weight[MAX], value[MAX],capacity;
	float ratio[MAX], temp;
	int num, i, j;
	
	printf("배낭의 용량? : ");
	scanf("%f", &capacity);
	printf("물건의 개수? : ");
	scanf("%d", &num);

	printf("\n물건의 무게와 가치?\n");
	for (i = 0; i < num; i++) {
		printf("%dth : ", i+1);
		scanf("%f %f", &weight[i],&value[i]);
	}
	for (i = 0; i < num; i++)
		ratio[i] = value[i] / weight[i];
	for (i = 0; i < num; i++)
		for (j = i + 1; j < num; j++) {
			if (ratio[i] < ratio[j]) {
				temp = ratio[j];
				ratio[j] = ratio[i];
				ratio[i] = temp;

				temp = weight[j];
				weight[j] = weight[i];
				weight[i] = temp;

				temp = value[j];
				value[j] = value[i];
				value[i] = temp;
			}
		}
	knapsock(capacity, num, weight, value);



	getchar();
	getchar();

	return 0;
}
