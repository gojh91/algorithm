#pragma warning(disable:4996)
#include<stdio.h>

int change;

int main(void) {
	int n500, n100, n50, n10, n1;

	n500 = 0;
	n100 = 0;
	n50 = 0;
	n10 = 0;
	n1 = 0;

	printf("총 금액: ");
	scanf("%d", &change);

	while (change >= 500) {
		change = change - 500;
		n500++;
	}
	printf("500원=%d개\n", n500);

	while (change >= 100) {
		change = change - 100;
		n100++;
	}
	printf("100원=%d개\n", n100);

	while (change >= 50) {
		change = change - 50;
		n50++;
	}
	printf("50원=%d개\n", n50);

	while (change >= 10) {
		change = change - 10;
		n10++;
	}
	printf("10원=%d개\n\n", n10);

	while (change >= 1) {
		change = change - 1;
		n1++;
	}
	printf("1원=%d개\n\n", n1);

	printf("동전의 총 개수 = %d개", n500 + n100 + n50 + n10 + n1);

	getchar();
	getchar();

	return 0;
}
