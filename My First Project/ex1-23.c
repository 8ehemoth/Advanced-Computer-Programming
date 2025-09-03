#define _CRT_SECURE_NO_WARNINGS

// 예제 1.23 문자와 문자열
// 저번 1주차 실습때 오류났던 이유 : 기계적인 오류(버전별로 달라서 외우기 힘듬)


#include <stdio.h>
#include <conio.h> // getche()
#include <string.h> // strlen()

#define SIZE 10

int main(void)
{
	char ch, str[SIZE];
	int i;

	printf("Input a character : ");
	ch = _getche();
	_putch(ch);
	printf("\n");

	printf("Input a string : ");
	gets(str);
	puts(str);

	printf("배열을 문자 한 개씩 출력 : ");
	for (i = 0; i < SIZE; i++)
		_putch(str[i]);
	printf("\n");

	printf("str length = %d \n",strlen(str));

	return 0;
}