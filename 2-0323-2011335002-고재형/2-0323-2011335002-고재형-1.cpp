#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int answer = 59;
	int guess;
	int tries = 0;

	printf("********���� ���߱� ����*********\n\n");
	do {
		printf("������ ���纸����!:");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("���� Ů�ϴ�.");
		if (guess < answer)
			printf("���� �۽��ϴ�.");
	} while (guess != answer);
	printf("\n�����մϴ�.�õ�Ƚ��=%d\n", tries);

	getchar();
	getchar();

	return 0;
}
