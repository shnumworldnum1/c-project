#include <stdio.h>

int main(void)
{
	int num1 = 15;	// 00000000 00000000 00000000 00001111
	int num2 = ~num1;	// ~ 연산자 비트단위 NOT은 0에서 1을 반환하는 것이고 1에서 0을 반환하는 것이다. (보수연산이라고도 불린다.)
						// 그러므로 00001111 이 16이면 보수 연산을 하여 0이다 1로 반환되어 
	 // num1 = 11111111 11111111 11111111 11110000 완전히 반되가 되는 것이므로 -1을 곱해서 -16으로 만들어준다.
	printf("NOT 연산의 결과 : %d \n", num2);
	return 0;
}