#include <stdio.h>

void Recursive(int num)
{
	if (num <= 0)	// Recursive(����Լ�) �Լ��� ���޵Ǵ� ������ ���� 0������ ��쿡�� �Լ��� ����ǵ��� ���ǵǾ� �ִ�. 
		return;		//        "            �Լ��� 0�� ���� �Ǿ����Ƿ� '����� Ż������' �� �����Ǿ� �Լ��� ��ȯ�ϱ� �����Ѵ�.
	printf("Recursive call! %d \n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(3);
	return 0;
}