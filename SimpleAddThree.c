#include <stdio.h> 

int main(void)
{
	int result;
	int num1, num2;

	printf("정수 one: "); // scanf_s = ("정수 one: 여기 서부터 scanf_s = 숫자나 문자를 입력 받을수있다 근데 문자는 %c 이다
	scanf_s("%d", &num1); 
	printf("정수 two: "); // scanf_s = ("정수 one: ○<- 바로 여기에 실행을 시키면 내가 입력을 시킬수 있는 것이다 "); 
	scanf_s("%d", &num2); 

	result=num1+num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}