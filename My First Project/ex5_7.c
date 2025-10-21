#include <stdio.h>
#include <math.h>

float myfunc(float x);

int main(void) {
	int i;
	float y;

	for (i = 1; i < 6; i++) {
		y = myfunc(i);
		printf("x = %d, y= %.2f\n", i, y);


	}
	
	return 0;
}

float myfunc(float x) {
	float y;
	//y = (x * x - 5 * x + 6) / ((x - 2) * (x + 3));

	//인수분해 할줄안다!
	y = (x - 3) / (x + 3);

	return y;

}