#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main(void) {
	
	char s[] = "C Language Test";
	char c1 = 'a';
	char c2 = 'p';

	char *p1, *p2;
	
	printf("���� �迭 : %s\n", s);
	printf("���� �迭 ���� �ּ� : \t%d\n", s);

	p1 = strchr(s, c1);
	p2 = strchr(s, c2);

	printf("ã�� �ܾ� 'a' : \t%s\n", p1);
	printf("ã�� �ܾ� 'p' : \t%s\n", p2);
	getchar();
	getchar();

	return 0;
}
