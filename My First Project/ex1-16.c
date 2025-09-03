#define _CRT_SECURE_NO_WARNINGS

// 과제 1.16 if - else 를 이용한 학점 분류

#include <stdio.h>

int main(void)
{
	int num;

	printf("점수를 입력하시오(0 ~ 100점 사이) : ");
	scanf("%d", &num);

	if (num >= 81)
		printf("A 학점 입니다. \n");
	else if (num >= 61)
		printf("B 학점 입니다. \n");
	else if (num >= 41)
		printf("C 학점 입니다. \n");
	else
		printf("D 학점 입니다. \n");

	return 0;
}