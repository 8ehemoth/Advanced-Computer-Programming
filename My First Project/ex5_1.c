#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{       
	char mychar;
	printf("문자를 한 개 입력하시오: ");
	mychar = getche();
	printf("입력된 문자 : %c \n", mychar);

	return 0;

}