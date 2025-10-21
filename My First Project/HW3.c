/*
강원대학교 IT대학 전기전자공학과
학번 : 202210820 / 이름 : 이동제

고급컴퓨터프로그래밍 HW3 과제

----------------------------------------------------------------------------------------------

HW 3. 함수 인자로 struct complex 포인터 전달하기
함수 인자로 struct complex 포인터 전달하기 앞의 예제 3.9 과 동일한 내용의 프로그램을 작성하되, 
float 가 아니라 struct complex 형을 이용하여 프로그램 하시오.
즉, 두 개의 복소수를 매개변수로 받아서 합, 차, 평균을 반환하는 함수를 작성하고 테스트하시오.

- 제출은 ``.c'' 코드와 출력 사진이다. (참고: 출력은 소수점 둘째자리까지)

- 제출은 다음 수업 시간 전까지!
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 복소수 구조체 정의
struct complex {
    float real;
    float imag;
};

// 함수 원형 선언
void compute(struct complex* x, struct complex* y, struct complex* sum, struct complex* diff, struct complex* average);

int main() {
    struct complex a, b, s, d, avg;

    printf("학번 : 202210820 / 이름 : 이동제\n");
    printf("첫 번째 복소수 입력 (real imag): ");
    scanf("%f %f", &a.real, &a.imag);

    printf("두 번째 복소수 입력 (real imag): ");
    scanf("%f %f", &b.real, &b.imag);

    compute(&a, &b, &s, &d, &avg);

    printf("Sum = %.2f + %.2fi\n", s.real, s.imag);
    printf("Diff = %.2f + %.2fi\n", d.real, d.imag);
    printf("Average = %.2f + %.2fi\n", avg.real, avg.imag);

    return 0;
}

// 예제 3.6에서 ->로 포인에 값을 전달,
// 예제 3.8에서 void 안에 struc complex를 사용. 같은 개념들을 적용

void compute(struct complex* x, struct complex* y, struct complex* sum, struct complex* diff, struct complex* average)
{
    sum->real = x->real + y->real;
    sum->imag = x->imag + y->imag;

    diff->real = x->real - y->real;
    diff->imag = x->imag - y->imag;

    average->real = (x->real + y->real) / 2.0;
    average->imag = (x->imag + y->imag) / 2.0;
}

