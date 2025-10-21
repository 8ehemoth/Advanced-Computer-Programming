#define _CRT_SECURE_NO_WARNINGS

// 예제 1.5 문자열 입출력

#include <stdio.h>

int main(void) {

	char name[50];

	printf("이름을 입력하시오 : ");
	scanf("%s", name);

	printf("입력된 이름 = %s \n", name);

	return 0;
}

/*
C에서 배열 이름은 대부분의 식에서 첫 원소의 주소로 decay돼서 char* 가 됩니다.
그래서 scanf("%s", name); 은 사실상 scanf("%s", &name[0]); 와 같아 주소가 전달돼요.
*/