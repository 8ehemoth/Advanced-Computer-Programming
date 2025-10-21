#define _CRT_SECURE_NO_WARNINGS

// 예제 3.1 fputc 파일 출력

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	FILE *fp;
	int   i;

	fp = fopen( "adctest.txt", "w");
	if (!fp) {
		printf("File open error: adctest.txt");
		exit(1);
	}

	for (i = 'A'; i <= 'Z'; i++)
		fputc(i, fp);

	fclose(fp);

	return 0;
}