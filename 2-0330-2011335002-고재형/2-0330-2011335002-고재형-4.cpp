#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main(void) {
	
	char s1[10];
	char s2[10];
	int result;

	printf("ù��° �ܾ� : ");
	scanf("%s",s1);
	printf("�ι�° �ܾ� : ");
	scanf("%s",s2);

	result= strcmp(s1, s2);

	if (result == 0)printf("������\n");
	else printf("�ٸ�\n");

	getchar();
	getchar();

	return 0;
}
