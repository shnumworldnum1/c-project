#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);
	//조건을 만족하면 1을 조건을 만족하지 않으면 0을 반환한다
	printf("result1: %d \n", result1); // num1이 num2 보다 작으므로 조던을 만족하지 못했으으로 '0' 이다
	printf("result2: %d \n", result2); // num1이 num2 보다 작다 그러므로 작거나 같다는 조건을 만족하였으므로 '1' 이다
	printf("result3: %d \n", result3); // 조건 만족 x 그러므로 0
	return 0;
}