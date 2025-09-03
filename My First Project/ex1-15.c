#define _CRT_SECURE_NO_WARNINGS

// 과제 1.15 break과 continue

#include <stdio.h>

int main(void)
{
	int num;

	while (1) {
		printf("please input a number (음수이면 종료) : ");
		scanf("%d", &num);

		if (num < 0)
			break;
		else if (num > 10)
			continue;

		printf("num = %d \n", num);

	}

	return 0;

}