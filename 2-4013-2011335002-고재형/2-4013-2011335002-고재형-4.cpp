#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int *pi = NULL;
	char *pc = NULL;
	printf("메모리 할당 예제\n");
	pi = (int*)malloc(sizeof(int));
	if(pi==NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	*pi = 100;
	printf("%d\n", *pi);
	free(pi);
	pc = (char*)malloc(sizeof(char));
	if (pc == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	*pc = 'm';
	printf("%c\n", *pc);
	free(pc);


	getchar();
	getchar();

	return 0;
}
