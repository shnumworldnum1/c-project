#include <stdio.h>
// #define STNUM(Y, S, P)	YSP		<- 2���� ��ũ�θ� ����ϸ� ������ �߻��Ѵ�.
// #define STNUM(T, S, P)	Y S P	<- 3�൵ ���������� ����ϸ� ������ �߻��Ѵ�.
#define STNUM(Y, S, P)	((Y)*100000+(S)*1000+(P))

int main(void)
{
	printf("�й�: %d \n", STNUM(10, 65, 175));
	printf("�й�: %d \n", STNUM(10, 65, 075));
	return 0;
}