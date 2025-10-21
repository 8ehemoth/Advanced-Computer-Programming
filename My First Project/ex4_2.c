/*
 예제 3.2 포인터 이동

– 배열 char str[6]=”korea” 를 선언하시오. 배열 각 원소의 주소를 출력하시오.

• 배열의 원소의 간격은 몇 바이트씩 인가 ?
-> 출력 결과 맨 뒷자리가 1바이트씩 증가 = 원소 간격 1바이트

– char *ptr 을 선언하고 ptr 의 값을 문자열 str 의 시작 메모리 주소로 초기화
하시오. ptr 값과 str 의 시작 주소 값을 화면에 출력하시오. ptr 의 참조값 *ptr 을
화면에 출력하시오.

• 배열의 시작 주소와 일치하는가 ? 

• ptr 의 참조값과 배열의 첫 문자와 일치하는가 ?

– ptr = ptr + 1; 로 ptr 을 1 증가시키시오. ptr 은 배열의 다음 문자를 지시한다. *ptr
을 화면에 출력하시오. 이를 총 4회 반복하시오.

• 출력 값은 어떻게 되는가

*/

// 1바이트씩 증가하고 있음

#include <stdio.h>

void main() {
	char str[6] = "korea";
	int i;

	for (i = 0; i < 6; i++) {
		printf("\n %c의 메모리 주소 = %p", str[i], &str[i]);
	}

	char* ptr;
	ptr = &str[0];
	
	printf("\n ptr의 값은 %p", ptr);
	printf("\n str의 시작 주소 값은 %p", &str);
	printf("\n ptr의 참조 값은 %c", *ptr);

	for (i = 0; i < 4; i++) {
		ptr = ptr + 1;
		printf("\n %d: ptr의 참조 값은 %c", i, *ptr);
	}
}