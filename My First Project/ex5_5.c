#include <stdio.h>
#define MAX 7000

// 주어진 byte에 따라서 그에 알맞는 자료형을 사용해야 한다는 의미의 예제

int main()
{
	double i, sum = 0;

	for (i = 0; i <= MAX; i++) {
		sum = sum + i;
	}

	printf("MAX = %d, sum = %d \n", MAX, sum);

	return 0;
}