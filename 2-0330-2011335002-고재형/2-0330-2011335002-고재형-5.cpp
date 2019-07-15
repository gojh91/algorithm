#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main(void) {
	
	char s[] = "C Language Test";
	char c1 = 'a';
	char c2 = 'p';

	char *p1, *p2;
	
	printf("문자 배열 : %s\n", s);
	printf("문자 배열 시작 주소 : \t%d\n", s);

	p1 = strchr(s, c1);
	p2 = strchr(s, c2);

	printf("찾는 단어 'a' : \t%s\n", p1);
	printf("찾는 단어 'p' : \t%s\n", p2);
	getchar();
	getchar();

	return 0;
}
