#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>

struct student {
	int num;
	char name[20];
	double grade;
};

int main(void)
{
	struct student s[3] = {
		{101,"���缮",2.4},
		{202,"��ȣ��",3.7},
		{303,"�ŵ���",4.4}
	};
	struct student max;
	int i;
		
	printf("----- �л� ���� -----\n");
	for (i = 0; i < 3; i++) {
		printf("�й� : %d\t", s[i].num);
		printf("�̸� : %s\t", s[i].name);
		printf("���� : %.1lf\n", s[i].grade);
	}

	max = s[0];
	for (i = 1; i < 3;i++)
	if (max.grade < s[i].grade)max = s[i];
	printf("----- �ְ� ���� �л� ���� -----\n");
	printf("�й� : %d\t", max.num);
	printf("�̸� : %s\t", max.name);
	printf("���� : %1lf\n", max.grade);
	
	getchar();
	getchar();

	return 0;
}