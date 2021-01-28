#include <stdio.h>

int main(void)
{
	printf("literal int size: %d \n", sizeof(7));	// sizeof 일때 정수형은 int로 나타내어 준다
	printf("literal double size: %d \n", sizeof(7.14));		//   "   실수는 double로 바꾸어서 나타내어 준다.
	printf("literal char size: %d \n", sizeof('A'));		// ch를 따로 sizeof( ) <-괄호 안에다가 써주지 않는 이상 정수는 int 로 고치는 것이다.
	return 0;
}