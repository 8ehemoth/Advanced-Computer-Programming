#define _CRT_SECURE_NO_WARNINGS

// 예제 1.17 switch 문

#include <stdio.h>

int main(void)
{
	int num;

	printf("점수를 입력하시오 (0 ~ 100점 사이) : ");
	scanf("%d", &num);

	switch (num) {
		case 0: printf("입력하신 수는 0 입니다. \n"); break;
		case 1: printf("입력하신 수는 1 입니다. \n"); break;
		case 2: printf("입력하신 수는 2 입니다. \n"); break;
		default: printf("0보다 작거나 2보다 큽니다 \n"); break;
	}
	return 0;

}