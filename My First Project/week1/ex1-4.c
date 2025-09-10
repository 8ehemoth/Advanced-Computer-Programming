#define _CRT_SECURE_NO_WARNINGS

// 예제 1.4 숫자를 입력 받아 직사각형의 면적 계산

#include <stdio.h>

int main(void) {

	int width, height, area;

	printf("width 값을 입력하시오 : ");
	scanf("%d", &width);

	printf("height 값을 입력하시오 : ");
	scanf("%d", &height);

	area = width * height;
	printf("직사각형 면적 : ");
	printf("width = %d ", width);
	printf("height = %d ", height);
	printf("area = %d \n ", area);

	return 0;
}