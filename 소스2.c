#include <stdio.h>
#include <math.h>
#define MAXIMUM 3
#pragma warning (disable : 4996)

int main(void) {
	
	int row1 =0;
	int col1 =0;
	int row2 =0;
	int col2  =0;
	int i, j, k;
	int  array1[3][3] = {0,};
	int  array2[3][3] = {0,};
	int  array3[3][3] = {0,};
	int count = 0;

	printf("<	A��� > �p �� ? �p ��? : ");
	scanf("%d %d", &row1,& col1);

	printf("<	B��� > �p �� ? �p ��? : ");
	scanf("%d %d", &row2, &col2);

	if (col1 != row2) {
		
		printf("��� A�� �� ���� ��� B�� �� �� ����ġ");
	
	}
	else {
		printf("��� A �Է�");
		for (i = 0; i < MAXIMUM; i++) {

			j = 0;
			scanf("%d  %d %d ", &array1[i][j], &array1[i][j + 1], &array1[i][j + 2]);
		}
	
		printf("��� B �Է�");
		for (i = 0; i < MAXIMUM; i++) {

			j = 0;
			scanf("%d  %d %d ", &array2[i][j], &array1[i][j + 1], &array1[i][j + 2]);
		}
	

		for (i = 0; i < MAXIMUM; i++) {

			for (j = 0; j < MAXIMUM; j++) {

				for (k = 0; k < MAXIMUM; k++) {

					array3[i][j] = array3[i][j] + array1[i][k] * array2[k][j];
					count += 1;
				}
			}
		}
		for (i = 0; i < 3; i++) {

			for (j = 0; j < 3; j++) {

				printf("%3d", array3[i][j]);

			}
			printf("\n");
		}
	}
	printf("���� Ƚ�� %d", count);
	getchar(stdin);
	getchar(stdin);
	
	return 0;
}

