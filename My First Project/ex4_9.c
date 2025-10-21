#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void compute(float x, float y, float* sum, float* diff, float* average);

int main() {
	float mx, my, msum, mdiff, maverage;

	printf("Float 숫자를 두 개 입력하시오 :");
	scanf("%f %f", &mx, &my);

	compute(mx, my, &msum, &mdiff, &maverage);

	printf("Sum = %f, Diff = %f, Average = %f \n", msum, mdiff, maverage);

	return 0;
}

void compute(float x, float y, float* sum, float* diff, float* average)
{
	*sum = x + y;
	*diff = x - y;
	*average = (float)(x + y) / 2.0;
}