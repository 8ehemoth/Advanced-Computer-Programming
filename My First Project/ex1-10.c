#define _CRT_SECURE_NO_WARNINGS

// 예제 1.10 여러 개의 변수 입력과 합계

#include <stdio.h>

int main(void)
{
	int sum, num1, num2, num3, num4, num5;

	printf("please input num1 : ");
	scanf("%d", &num1);

	printf("please input num2 : ");
	scanf("%d", &num2);

	printf("please input num3 : ");
	scanf("%d", &num3);

	printf("please input num4 : ");
	scanf("%d", &num4);

	printf("please input num5 : ");
	scanf("%d", &num5);

	sum = num1 + num2 + num3 + num4 + num5;
	printf("sum = %d \n", sum);

	return 0;
}