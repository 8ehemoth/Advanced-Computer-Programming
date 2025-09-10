#include <stdio.h>

// 함수 원형 선언
void rectangle(int row, int col);
void rectangleLine(int row, int col);

int main(void) {

	rectangle(5, 10);
	rectangle(7, 15);
	rectangle(10, 20);

	rectangleLine(5, 10);
	rectangleLine(7, 15);
	rectangleLine(10, 20);
}

// 함수 사용
void rectangle(int row, int col) {
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
}

// 첫번째 행과 마지막 행은 반복적으로 별을 꺼내도 됌
// 별로 사각형 만들기
void rectangleLine(int row, int col) {
	int i, j;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			// if 문과 or 문을 사용해서 경계선만 그릴 수 있도록함
			// 이런 부분을 잘 생각해야 함
			if (j == 0 || i == 0 || j == (col - 1) || i == (row - 1))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("\n");
}

