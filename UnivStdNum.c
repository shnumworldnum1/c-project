#include <stdio.h>
// #define STNUM(Y, S, P)	YSP		<- 2행의 매크로를 사용하면 에러가 발생한다.
// #define STNUM(T, S, P)	Y S P	<- 3행도 마찬가지로 사용하면 에러가 발생한다.
#define STNUM(Y, S, P)	((Y)*100000+(S)*1000+(P))

int main(void)
{
	printf("학번: %d \n", STNUM(10, 65, 175));
	printf("학번: %d \n", STNUM(10, 65, 075));
	return 0;
}