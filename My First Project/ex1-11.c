#define _CRT_SECURE_NO_WARNINGS

// 예제 1.11 배열 입력과 합계

#include <stdio.h>

int main(void)
{
	int i, num[10], sum = 0;

	for (i = 0; i< 10; i++) {
		printf("please input num%d : ", i);
		scanf("%d", &num[i]);
		sum = sum + num[i];
	}

	printf("sum = %d \n", sum);

	return 0;
}