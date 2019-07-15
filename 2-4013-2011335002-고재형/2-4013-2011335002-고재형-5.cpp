#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	char *love = NULL;

	love = (char*)malloc(sizeof(char)*11);
	if (love == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	strcpy(love,"I Love You");
	printf("%s\n", love);

	love = (char*)realloc(love, sizeof(char)*20);
	strcpy(love, "I Love You so much");
	printf("%s\n", love);

	memset(love + 2, '*', 4);
	printf("%s\n", love);

	free(love);


	getchar();
	getchar();

	return 0;
}
