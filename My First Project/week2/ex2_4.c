// 실습 2.4 구조체를 이용한 성적처리

#include <stdio.h>

struct score {
	int kor;
	int en;
	int math;

};

float average_struct(struct score data);

int main(void) {
	
	int chul = 0;
	int young = 1;
	int gil = 2;
	int avg_out;
	int i;

	struct score et[5] = { {90, 80, 85}, {60, 50, 45}, {70, 86, 78} };

	for (i = 0; i < 3; i++) {
		
		avg_out = average_struct(et[i]);
		printf("%d-th avg score is %d\n", i, avg_out);
	}
}

float average_struct(struct score data) {
	float avg;
	
	avg = (data.kor + data.en + data.math) / 3;

	return avg;
}
