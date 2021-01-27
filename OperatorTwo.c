#include <stdio.h>

int main(void)
{
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3; // num 1+=3 <-이것은 num1=num1+3; 과 같다 
	num2 *= 4; // 이것은 num1=num1×4; 와 같다
	num3 %= 5; // num3=num3 % 5; 와 같다
	printf("Result: %d, %d, %d \n", num1, num2, num3);
	return 0;
}