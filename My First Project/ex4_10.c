#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square(int x);
void cube(int x);

int main() {
	
	void (*myfunc)(int);
	int num;

	printf("input a number : ");
	scanf("%d", &num);

	myfunc = square;
	(*myfunc)(num);

	myfunc = cube;
	(*myfunc)(num);

	return 0;
}

void square(int x)
{
	printf("square() : x Á¦°ö = %d\n", x * x);
}
void cube(int x)
{
	printf("square() : x 3Á¦°ö = %d\n", x * x * x);
}