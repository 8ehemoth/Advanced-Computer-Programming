#define _CRT_SECURE_NO_WARNINGS

// 예제 1.6 문자 입출력

#include <stdio.h>

int main(void) {

	char mychar;

	printf("문자를 한 개 입력하시오 : ");
	scanf("%c", &mychar);
	printf("입력된 문자 : %c \n", mychar);

	//키보드버퍼에남아있지만아직읽혀들여지지않은입력
	//값은예상하지못한오류를발생할수있으니주의가필요함.
	// While (getchar() != '\n' ) continue;
	return 0;
}