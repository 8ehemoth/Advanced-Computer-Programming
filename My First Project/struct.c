/* 구조체 (과제 있으니 제대로 숙지) */

/* 구조체 선언하는 방식은 3가지가 있음
구조체만 선언
구조체와 구조체 변수를 동시에 선언
구조체 선언과 초기화
*/

// 예제 2.1 구조체 1

#include <stdio.h>

struct time {
	int hours;
	int minutes;
	int seconds;

} time_of_birth = { 8, 46, 0 };

int main(void) {
	struct time start;
	struct time record[5] = { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}, {13,14,15} };
	int i;

	start.hours = 10;
	start.minutes = 20;
	start.seconds = 30;

	printf("start : hours %d minutes %d seconds %d \n", start.hours, start.minutes, start.seconds);
	
	for (i = 0; i < 5; i++)
		printf("record[%d] = %d : %d : %d \n", i, record[i].hours, record[i].minutes, record[i].seconds);

	return 0;
}