#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>

typedef struct student {
	int num;
	double grade;
}STU;

void data_modi(STU*);

int main(void)
{
	STU s = { 1, 4.0 };
	printf("학번 : %d\n",s.num);
	printf("학점 : %.1lf\n\n", s.grade);

	data_modi(&s);

	printf("학번 : %d\n", s.num);
	printf("학점 : %.1lf\n", s.grade);
		
	getchar();
	getchar();

	return 0;
}

void data_modi(STU*sm) {
	sm->num = 2;
	sm->grade = 2.5;
}