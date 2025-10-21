
/* HW2 과제
- 학번: 202210820
- 이름 : 이동제
*/

/* 예제 3.5와 3.6을 다음과 같이 수정하시오.
– Main 함수에서 struct complex et[10] 을 선언한다.
– 파일 hw_2.bin 를 읽어서 10 개의 복소수 값을 읽어 들이고 et[10] 에
저장한다.
– 이때, 저장 순서는 real, imag, real, imag, …, 순서이다.
– et의 복소수 값 10개를 화면에 출력한 후 결과 값 제출
– 제출은 “.c” 코드와 출력 사진 (출력은 소수점 둘째자리까지)
– 제출은 다음 수업 시간 전까지
*/

// for 문을 10번 돌려라!!

#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


struct complex {
	float real;
	float imag;
};

int main(void) {

	
	struct complex et[10];

	FILE* fp;


	fp = fopen("hw_2.bin", "rb");
	if (!fp) {
		printf("hw_2.bin open error\n");
		exit(1);
	}

	//for문 10번과 et[i] 배열을 사용해서 read와 printf까지 수행하도록 했음
	for (int i = 0; i < 10; i++) {
		fread(&et[i].real, sizeof(float), 1, fp);
		fread(&et[i].imag, sizeof(float), 1, fp);
		printf("%2d번째 복소수: %.2f + %.2f*i\n", i + 1, et[i].real, et[i].imag);
	}


	fclose(fp);


	return 0;
}

