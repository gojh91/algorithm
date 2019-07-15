#pragma warning(disable:4996)
#include<stdio.h>

#define CLA 3
#define STU 5


int main(void) {
	int score[CLA][STU] = {
		{50,60,70,80,90},
		{55,65,75,85,95},
		{57,67,87,97,100},
	};
	
	int stud,classes;
	double total, subtotal;
	total = 0;
	for (classes = 0; classes < CLA; classes++) {
		subtotal = 0;
		for (stud = 0; stud < STU; stud++)
			subtotal += score[classes][stud];
		printf("학급 %d의 평균 성적=%.2f\n", classes + 1, subtotal / STU);
		total += subtotal;
	}
	printf("전체 학생들의 평균 성적= %.2f\n", total / (CLA*STU));
		
	getchar();
	getchar();

	return 0;
}
