#include <stdio.h>

int varG;

int main(void) {
	int varL = 0;

	printf("varG : %d\n", varG);
	printf("varL : %d\n", varL);

	varG = 10;
	varL = 20;

	printf("varG : %d\n", varG);
	printf("varL : %d\n", varL);

	{
		int varB = 3;
		varG = 0;
		varL = 0;

		printf("varG : %d\n", varG);
		printf("varL : %d\n", varL);
		printf("varB : %d\n", varB);

	}

	printf("varG : %d\n", varG);
	printf("varL : %d\n", varL);
	//printf("varB : %d\n", varB);

}