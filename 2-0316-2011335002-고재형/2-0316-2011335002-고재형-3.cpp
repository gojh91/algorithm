#pragma warning(disable: 4996)
#include <stdio.h>



int main(void) {


	int x, y, r;

	printf("�ΰ��� ������ �Է��Ͻÿ�:");
	scanf("%d%d", &x, &y);

	
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);

	getchar();
	getchar();

	return 0;
}

