#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main(void) {
	
	char dic[5][2][10] = {
		{"book","å"},
		{ "boy","�ҳ�" },
		{ "computer","��ǻ��" },
		{ "language","���" },
		{ "rain","��" }
	};
	char word[30];
	int i, check;
	while (1) {
		check = 0;
		printf("ã�� ���� �ܾ� : ");
		scanf("%s", word);
		for (i = 0; i < 5; i++) {
			if (strcmp(dic[i][0],word) == 0) {
				printf("%s:%s\n\n", word, dic[i][1]);
				check = 1;
				break;
			}
		}
		if (check == 0) printf("������ ����! \n\n");
	}
	
	
	getchar();
	getchar();

	return 0;
}
