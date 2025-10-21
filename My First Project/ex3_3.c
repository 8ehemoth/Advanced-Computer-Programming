#define _CRT_SECURE_NO_WARNINGS

// 예제 3.3 fgetc 파일 입력

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* infile, *outfile;

	char ch;

	infile = fopen("adctest.txt", "r");
	if (!infile) {
		printf("File open error: adctest.txt");
		exit(1);
	}

	outfile = fopen("adctest2.txt", "w");
	if (!outfile) {
		printf("File open error: adctest2.txt");
		exit(1);
	}

	while ((ch = fgetc(infile)) != EOF) {
		fputc(ch, outfile);
	}

	fclose(infile);
	fclose(outfile);

	return 0;
}
