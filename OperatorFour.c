#include <stdio.h>

int main(void)
{
	int num1 = 12;
	int num2 = 12;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); 
	printf("num1: %d \n\n", num1); // 위에서의 num1++ 이 되었기 때문에 9행의 값이 +1이 된다 

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); // ++num2 이처럼 쓰이면 12행을 수가 +1이되고 
	printf("num2: %d \n", num2); // 13행의 수도 +1이 된다
	return 0;
}