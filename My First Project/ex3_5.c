#define _CRT_SECURE_NO_WARNINGS

// 예제 3.5 fscanf를 이용한 입출력

#include <stdio.h>
#include <stdlib.h>

/* 구조체 선언과 초기화 */
struct complex {
	float real;
	float imag;
};

int main(void) {

	struct complex x, y, z;
	FILE* fp;

	if (!(fp = fopen("indata.txt", "r"))) {
		printf("File indata.txt open error\n");
		exit(1);
	}

	fscanf(fp, "%f, %f, %f, %f", &x.real, &x.imag, &y.real, &y.imag);

	printf("x = %.2f + %.2f*i \n", x.real, x.imag);
	printf("y = %.2f + %.2f*i \n", y.real, y.imag);

	fclose(fp);

	return 0;
}

