// 예제 1.18 형 변환

#include <stdio.h>

int main(void)
{
	int anum = 4, bnum = 3, cnum;
	float fnum;

	cnum = anum / bnum;
	printf("4/3를 int로 출력 = %d \n", cnum);
	printf("4/3를 float로 출력 = %f \n", cnum);

	fnum = (float)anum / bnum;
	printf("(float)4/3를 float로 출력 = %f \n", fnum);

	return 0;
}


// 논리연산자 && AND / || OR / ! NOT
// 비트연산자 & AND / | OR / <<,>> shift

