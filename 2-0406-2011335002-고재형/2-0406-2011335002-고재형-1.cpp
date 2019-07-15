#pragma warning(disable:4996)
#include<stdio.h>

int main(void)
{
	char s[3][6] = { "init","open","close" };
	int i;

	for (i = 0; i < 3; i++)
		printf("%s\n", s[i]);

	printf("\n%c\n", s[1][2]);
	







	getchar();
	getchar();

	return 0;
}