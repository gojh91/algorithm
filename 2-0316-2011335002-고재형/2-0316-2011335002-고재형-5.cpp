#pragma warning(disable: 4996)
#include <stdio.h>

int Euclid(int a,int b);

int main(void) {

	int a, b, c;
		
	printf("�ΰ��� ������ �Է��Ͻÿ�:");
	scanf("%d%d", &a, &b);
	
	c = Euclid(a, b);

	printf("�ִ� ������� %d�Դϴ�.\n", c);

	getchar();
	getchar();

	return 0;

}

	int Euclid(int a, int b)
	{
		if (b==0) return a;
		return Euclid(b, a % b);
	}


