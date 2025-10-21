#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 각 라운드마다 입력값에 대한 평균을 구하고 싶은거임
// 근데 지금 sum은 계속 누적되고 있음

int main(void)
{
	int i, num;
	int sum = 0, count = 0;
	
	for (i = 0; i < 3; i++) {
		
		sum = 0;
		count = 0;
		//num = 0; num은 굳이 초기화하지 않아도 됨

		while (1) {
			printf("정수를 입력하세요. 음수를 입력할 때 까지 평균을 계산함 :");
			scanf("%d", &num);
				if (num < 0) break;
			count++;
			sum = sum + num;
		}


		printf("sum =%d \r\n", sum);
		printf("count =%d \r\n", count);

		printf("average =%f \r\n", (double)sum / count);


	}
	
}