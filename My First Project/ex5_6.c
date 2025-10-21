#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int x, y;

	printf("int x, y를 입력하세요: ");

	scanf("%d %d", &x, &y);

	if (x == 0 && y == 1) return 0;

	printf("result = ");

	if (x == 0)
		if (y == 0) printf("(0,0)\n");
		else
			if (y == 0)
				printf("(1,0)\n");
			else
				Printf("(1,1)\n");
	return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;

    printf("int x, y를 입력하세요: ");
    if (scanf("%d %d", &x, &y) != 2) {          // C6031 해결: 반환값 확인
        fprintf(stderr, "입력 오류\n");
        return 1;
    }

    printf("result = ");
    if (x == 0 && y == 0) {
        printf("(0,0)\n");
    } else if (x == 0 && y == 1) {
        printf("(0,1)\n");
    } else if (x == 1 && y == 0) {
        printf("(1,0)\n");
    } else if (x == 1 && y == 1) {
        printf("(1,1)\n");
    } else {
        printf("유효한 값이 아닙니다 (x,y는 0 또는 1)\n");
    }
    return 0;
}

*/