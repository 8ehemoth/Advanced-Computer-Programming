#define _CRT_SECURE_NO_WARNINGS

// 예제 3.2 fgetc 파일 입력

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* fp;
	char ch;

	fp = fopen("adctest.txt", "r");
	if (!fp) {
		printf("File open error: adctest.txt");
		exit(1);  
	}

	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}

	fclose(fp);

	return 0;
}