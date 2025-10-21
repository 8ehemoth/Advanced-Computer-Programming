#include <stdio.h>

struct cmplx {
	float real;
	float imag;
};

struct cmplx mult_complex(struct cmplx x, struct cmplx y);

int main(void) {

	struct cmplx x = { 2,3 }, y = { 4,5 }, z;
	// x = 2+3i, y= 4+5i

	z = mult_complex(x, y);
	printf(" result is z = %.2f + i* %.2f", z.real, z.imag);
}

struct cmplx mult_complex(struct cmplx x, struct cmplx y) {
	float real;
	float imag;
	struct cmplx z;

	// 8 + 10i + 12i + 15i^2 = (8-15) + (10+12)i = -7 + 22i
	// real엔 j가 붙지 않은 real부만 넣어주고 ( i * i = -1로 real값이 됌 )
	// imag엔 i가 붙은 imag부만 넣어준다.

	real = (x.real * y.real) - (x.imag * y.imag);
	imag = (x.imag * y.real) + (y.imag * x.real);

	z.real = real;
	z.imag = imag;

	return z;
}

