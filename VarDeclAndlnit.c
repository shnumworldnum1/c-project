#include <stdio.h>

int main(void)
{
	int num1=20, num2=40;	// num1선언이고 = 20을 붙이면 num1에 대한 20이 초기화이다 num2=40도 마찬가지로 num2는 선언 =40은 초기화 
	int num3 = 30, num4 = 40;	// 위에 참조 ∧

	printf("num1: %d, num2: %d \n", num1, num2); // 이렇게 되면 위에 초기화한 값 num1=20이 나올 것이고 num2=40 이 나올 것이다 
	num1 = 10;	// 변수 num1에 10을 대입한 것이다.
	num2 = 20;	// 위와 같이 이것은 변수 num2에 20을 대입한 것이다.
// (위에서 아래로 선언과 초기화를 하고 그 다음에 num1=10 num2=20으로 덮어씌운 것이다 다른 값도 덮어씌울수있다 (수는 상관없고 몇개를 쓰는지도 상관없다.)
	printf("num1: %d, num2: %d \n", num1, num2); // 이렇게 되면 대입한 값인 num1=10, num2=20 이 나올 것이다 
	printf("num3: %d, num4: %d \n", num3, num4); // num3, num4 는 대입을 따로 하지 않았기 때문에 선언과 초기화한 값인 num3=30, num4=40 이 나올 것이다.
	// ※ 선언을 만약에 num 으로하면 밑에 printf나 대입할때에도 똑같이 num 으로 맞춰서 쓴다.
	return 0;
}