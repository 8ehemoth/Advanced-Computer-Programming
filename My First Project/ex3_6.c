#define _CRT_SECURE_NO_WARNINGS

// 예제 3.6 fread와 fwrite 를 이용한 복소수 입출력

#include <stdio.h>
#include <stdlib.h>

/* 구조체 선언과 초기화 */
struct complex {
	float real;
	float imag;
};

int main(void) {

	struct complex x = { 1,2 }, y = { 3,4 }, u, z;
	FILE* fp;

	printf("write x = %.2f + %.2f*i\n", x.real, x.imag);
	printf("write y = %.2f + %.2f*i\n", y.real, y.imag);

	fp = fopen("complex.bin", "wb");
	if (!fp) {
		printf("File complex.bin open error\n");
		exit(1);
	}

	fwrite(&x.real, sizeof(float), 1, fp);
	fwrite(&x.imag, sizeof(float), 1, fp);
	fwrite(&y.real, sizeof(float), 1, fp);
	fwrite(&y.imag, sizeof(float), 1, fp);
	
	fclose(fp);

	fp = fopen("complex.bin", "rb");
	if (!fp) {
		printf("File complex.bin open error\n");
		exit(1);
	}

	fread(&u.real, sizeof(float), 1, fp);
	fread(&u.imag, sizeof(float), 1, fp);
	fread(&z.real, sizeof(float), 1, fp);
	fread(&z.imag, sizeof(float), 1, fp);

	printf("write u = %.2f + %.2f*i\n", u.real, u.imag);
	printf("write z = %.2f + %.2f*i\n", z.real, z.imag);

	fclose(fp);

	return 0;
}

