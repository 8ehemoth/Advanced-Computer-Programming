#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <malloc.h>

struct complex {
	float real;
	float imag;
};

int main(void) {
	int i, length;

	struct complex* cnum;
	
	printf("input a integer (5-10):");
	scanf(" %d", &length);

	cnum = (struct complex*)malloc(sizeof(struct complex) * length);


	for (i = 0; i < length; i++) {
		cnum[i].real = i;
		cnum[i].imag = i;
	}

	printf("using cnum[i].real, cnum[i].imag:\n");
	for (i = 0; i < length; i++) {
		printf("cnum[%d]=%.2f + %.2f *i\n", i, cnum[i].real, cnum[i].imag);
	}

	printf("using (cnum+i)->real, (cnum+i)->imag:\n");
	for (i = 0; i < length; i++) {
		printf("cnum[%d]=%.2f + %.2f *i\n", i, (cnum + i)->real, (cnum + i)->imag);
	}

	free(cnum);

	return 0;

}