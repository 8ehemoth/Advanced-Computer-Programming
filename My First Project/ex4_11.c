#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square(int x);
void cube(int x);
void show(void (*pf)(int), int x);

int main() {

	void (*myfunc)(int);
	int num, work;

	printf("\n 1: square \n 2: cube \n\n 할 일을 선택하세요 :");
	scanf("%d", &work);


	printf("input a number x : ");
	scanf("%d", &num);

	if (work == 1)
		myfunc = square;
	else
		myfunc = cube;
	show(myfunc, num);

	return 0;
}

void square(int x)
{
	printf("square() : x 제곱 = %d\n", x * x);
}
void cube(int x)
{
	printf("square() : x 3제곱 = %d\n", x * x * x);
}
void show(void (*pf)(int), int x)
{
	(*pf)(x);
}