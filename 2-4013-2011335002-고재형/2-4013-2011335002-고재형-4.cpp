#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
int main(void){
	int *pi = NULL;
	char *pc = NULL;
	printf("�޸� �Ҵ� ����\n");
	pi = (int*)malloc(sizeof(int));
	if(pi==NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	*pi = 100;
	printf("%d\n", *pi);
	free(pi);
	pc = (char*)malloc(sizeof(char));
	if (pc == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	*pc = 'm';
	printf("%c\n", *pc);
	free(pc);


	getchar();
	getchar();

	return 0;
}
