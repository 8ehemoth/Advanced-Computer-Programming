#include <stdio.h>
#include <string.h>

void printComplex(struct complex number);
void printPcomplex(struct complex *pi);

int main() {
	struct complex x = { 1,2 };

	printComplex(x);
	printPcomplex(&x);

	return 0;
}

void printComplex(struct complex x) {
	printf("printInteger(): x = %.2f + %.2f *i \n", x.real, x.imag);

}

void printPcomplex(struct complex* pi) {
	printf("printPInteger(): x = %.2f + %.2f *i \n", pi->real, pi->imag);

}
