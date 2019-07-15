#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main(void) {
	
	char dic[5][2][10] = {
		{"book","책"},
		{ "boy","소년" },
		{ "computer","컴퓨터" },
		{ "language","언어" },
		{ "rain","비" }
	};
	char word[30];
	int i, check;
	while (1) {
		check = 0;
		printf("찾을 영어 단어 : ");
		scanf("%s", word);
		for (i = 0; i < 5; i++) {
			if (strcmp(dic[i][0],word) == 0) {
				printf("%s:%s\n\n", word, dic[i][1]);
				check = 1;
				break;
			}
		}
		if (check == 0) printf("사전에 없음! \n\n");
	}
	
	
	getchar();
	getchar();

	return 0;
}
