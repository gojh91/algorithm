#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>

struct point {
	int x;
	int y;
};
struct rect {
	int w; int h;
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	double xdiff, ydiff, space, round;

	printf("���� ��� ��ǥ(x  y):");
	scanf("%d %d",&r.p1.x, &r.p1.y);
	printf("������ �ϴ� ��ǥ(x  y):");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	
	xdiff = r.p2.x - r.p1.x;
	ydiff = r.p1.y- r.p2.y;

	space = xdiff * ydiff;
	round = 2 * xdiff + 2 * ydiff;

	printf("���� :  %.2f, �ѷ� : %.2f\n", space, round);


	getchar();
	getchar();

	return 0;
}