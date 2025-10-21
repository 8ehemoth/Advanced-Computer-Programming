#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQUARE(a) (a)*(a)
#define MIN(a,b) ( (a)<(b) ? (a):(b) )

int main() {

	int i = 2, j = 3, inum;
	float x = 1.5, y = 2.5, fnum;

	printf(" SQUARE(i+j) = %d \n", SQUARE(i + j));
	printf(" MIN(i,j) = %d \n", MIN(i,j));

	printf(" SQUARE(x+y) = %f \n", SQUARE(x+y));
	printf(" MIN(x,y) = %f \n", MIN(x,y));

	return 0;
}
