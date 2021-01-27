#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12); // && 를 썻기 때문에 모두 참이여야 '1' 이 나온다. 결론은 둘다 참 임으로 '1' 이다
	result2 = (num1 <= 12 || num2 > 12); // || 를 썻기 때문에 둘중 하나만 참이여도 '1' 이 나온다. 결론은 num1 이 참 이므로 '1' 이다
	result3 = (!num1); // ! 를 썻다는 것은 참이면 거짓 거짓이면 참을 쓴다 그러므로 이것은 num1 <- 이것은 참이기에 거짓인 '0' 을 쓴다

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}