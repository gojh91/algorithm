#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int answer = 59;
	int guess;
	int tries = 0;

	printf("********숫자 맞추기 게임*********\n\n");
	do {
		printf("정답을 맞춰보세요!:");
		scanf("%d", &guess);
		tries++;
		if (guess > answer)
			printf("값이 큽니다.");
		if (guess < answer)
			printf("값이 작습니다.");
	} while (guess != answer);
	printf("\n축하합니다.시도횟수=%d\n", tries);

	getchar();
	getchar();

	return 0;
}
