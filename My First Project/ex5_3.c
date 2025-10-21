#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 10

int main(void)
{
	int i, j;
	int level_a = 35, level_b = 67;
	int count_a = 0, count_b = 0, count_c = 0;
	
	int nums[10] = { 23, 34, 95, 68, 93, 36 };
	
	for (i = 0; i < SIZE; i++) {
		if (nums[i] <= 0) continue;
		if (nums[i] > 100) continue;
		
		if (nums[i] > 0 && nums[i] <=level_a) {
			count_a++;
			// 확인 결과 :
			// nums[1] 배열에 모든 숫자가 들어가는 오류가 발생함
			// && 연산자를 사용하여 조건을 추가할 수 있음!!!
			printf("check case 1 for %d\n", nums[i]);
		}
		else if (nums[i] >= level_a && nums[i] <= level_b)
			count_b++;
		else if (nums[i] >= level_b)
			count_c++;
	}
	
	printf("i = %d \n", i);
	printf("count_a = %d \n", count_a);
	printf("count_b = %d \n", count_b);
	printf("count_c = %d \n", count_c);
}