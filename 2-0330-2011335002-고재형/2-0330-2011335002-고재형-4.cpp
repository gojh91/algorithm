#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main(void) {
	
	char s1[10];
	char s2[10];
	int result;

	printf("첫번째 단어 : ");
	scanf("%s",s1);
	printf("두번째 단어 : ");
	scanf("%s",s2);

	result= strcmp(s1, s2);

	if (result == 0)printf("동일함\n");
	else printf("다름\n");

	getchar();
	getchar();

	return 0;
}
