#pragma warning(disable:4996)
#include<stdio.h>

int main(void) {
	
	char str[] = "C programming" ;
	int i=0;

	while (str[i] != '\0') i++;
	printf("문자열 \"%s\"의 길이 : %d\n", str, i);


	
			
	getchar();
	getchar();

	return 0;
}
