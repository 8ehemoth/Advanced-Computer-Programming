#define _CRT_SECURE_NO_WARNINGS

// 예제 3.4 fgetc 파일 입력

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* infile, *outfile;

	char ch;
	int buffer[100];

	infile = fopen("adctest.txt", "r");
	if (!infile) {
		printf("File open error: adctest.txt");
		exit(1);
	}

	outfile = fopen("adctest3.txt", "w");
	if (!outfile) {
		printf("File open error: adctest3.txt");
		exit(1);
	}

	while (fgets(buffer, sizeof(buffer), infile)) {
		fputs(buffer, outfile);
	}

	fclose(infile);
	fclose(outfile);

	return 0;
}

