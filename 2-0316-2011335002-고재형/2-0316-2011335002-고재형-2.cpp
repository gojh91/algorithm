#pragma warning(disable: 4996)
#include <stdio.h>

int main(void) {

	int number;

	printf("���� �Է�(1~10):");
	scanf("%d", &number);

	switch (number) {
	case1:
	case2:
	case3:
		printf("��\n");
		break;
	case8:
	case9:
	case10:
		printf("��\n");
		break;
	default:
		printf("��\n");
		break;
	}

	getchar();
	getchar();


	return 0;
}
