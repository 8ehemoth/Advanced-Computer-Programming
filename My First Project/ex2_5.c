#include <stdio.h>

struct cmplx {
	float real;
	float imag;
};

struct cmplx cmplx_add(struct cmplx x, struct cmplx y);

int main(void) {

	struct cmplx x = { 2,3 }, y = { 4,5 }, z;

	printf("x = %.2f + i* %.2f", x.real, x.imag);

	z = cmplx_add(x, y);
	printf(" result is z = %.2f + i* %.2f", z.real, z.imag);
}

struct cmplx cmplx_add(struct cmplx x, struct cmplx y) {
	float real;
	float imag;
	struct cmplx z;

	real = x.real + y.real;
	imag = x.imag + y.imag;
	z.real = real;
	z.imag = imag;

	return z;
}