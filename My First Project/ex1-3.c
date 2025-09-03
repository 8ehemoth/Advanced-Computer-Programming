// 예제 1.3 직사각형의 면적을 화면에 출력

#include <stdio.h> 

int main(void) {
	
	int width = 3, height = 5, area;
	// c언어는 다른 언어와 다르게 초기에 선언해줘야 함

	area = width * height;
	
	printf("직사각형 면적 : \n");
	printf("width = %d \n", width);
	printf("height = %d \n", height);
	printf("area = %d \n", area);

	return 0;
}