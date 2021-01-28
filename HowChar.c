#include <stdio.h>

int main(void)
{
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);	//  %c는 문자 %d는 숫자 로 쓰여서 ' A 65 ' 이렇게 나온다
	printf("%c %d \n", ch2, ch2);	
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
}