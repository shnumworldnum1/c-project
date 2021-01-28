#include <stdio.h>

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;                                //   int / int 를하면 정수를 나누는 것이기 때문에  0이 나온다 
	divResult = num1 / num2;						//   만약에 double / double을 하면 소수쩜까지 나와 0.75가된가
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}