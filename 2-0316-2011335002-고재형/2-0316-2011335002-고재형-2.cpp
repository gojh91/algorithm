#pragma warning(disable: 4996)
#include <stdio.h>

int main(void) {

	int number;

	printf("숫자 입력(1~10):");
	scanf("%d", &number);

	switch (number) {
	case1:
	case2:
	case3:
		printf("저\n");
		break;
	case8:
	case9:
	case10:
		printf("고\n");
		break;
	default:
		printf("중\n");
		break;
	}

	getchar();
	getchar();


	return 0;
}
