#include <stdio.h>

int main(void)
{
	double d1 = 1.23e-3;	// 1.23 * 10의 -3승 이므로 정답은 0.00123이 된다
	double d2 = 1.23e-4;	// 1.23 * 10의 -4승 정답: 0.000123
	double d3 = 1.23e-5;	// 0.0000123
	double d4 = 1.23e-6;	// 0.00000123

	printf("%g \n", d1);	// %f 스타일 출력
	printf("%g \n", d2);	// %f 스타일 출력
	printf("%g \n", d3);	// %e 스타일 출력
	printf("%g \n", d4);	// %e 스타일 출력
	return 0;
}