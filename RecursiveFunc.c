#include <stdio.h>

void Recursive(int num)
{
	if (num <= 0)	// Recursive(재귀함수) 함수에 전달되는 인자의 값이 0이하인 경우에는 함수가 종료되도록 정의되어 있다. 
		return;		//        "            함수에 0이 절달 되었으므로 '재귀의 탈출조건' 이 성립되어 함수가 반환하기 시작한다.
	printf("Recursive call! %d \n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(3);
	return 0;
}