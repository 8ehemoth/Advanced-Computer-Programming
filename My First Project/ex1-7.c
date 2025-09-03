#define _CRT_SECURE_NO_WARNINGS

// 예제 1.7 문자 입출력 2

#include <stdio.h>
#include <conio.h>   // getch() 사용에 필요.

int main(void)
{
	char mychar;

	printf("문자를 한 개 입력하시오 : ");
	mychar = _getch();  //_getche();
	printf("입력된 문자 : %c \n", mychar);

	return 0;
}