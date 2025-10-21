#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main(void) {
	int i, length;
	float* fnum;

	printf("input a integer (5-10):");
	scanf("%d", &length);
	
	fnum = (float*)malloc(sizeof(float) * length);

	for (i = 0; i < length; i++) {
		*(fnum + i) = i;
	}

	printf("\n using fnum[i]: ");
	for (i = 0; i < length; i++)
		printf("%.2f ", fnum[i]);

	printf("\n using *(fnum+i): ");
	for (i = 0; i < length; i++)
		printf("%.2f ", *(fnum+i));


	free(fnum);
	return 0;

}