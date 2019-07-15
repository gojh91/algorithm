#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int x, y;
	for (x = 1; x <= 5; x++) {
		for (y = 0; y < x; y++) 
			printf("*");
			printf("\n");
	}
	getchar();
	getchar();

	return 0;
}
