#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>

struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1;
	struct point p2;
	double xdiff, ydiff, dist;

	printf("��1�� ��ǥ(x  y):");
	scanf("%d %d",&p1.x, &p1.y);
	printf("��2�� ��ǥ(x  y):");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p2.x - p1.x;
	ydiff = p2.y- p1.y;

	dist= sqrt(xdiff*xdiff+ydiff*ydiff);

	printf("�� �� ������ �Ÿ� : %.2f\n",dist);


	getchar();
	getchar();

	return 0;
}