#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);
	//������ �����ϸ� 1�� ������ �������� ������ 0�� ��ȯ�Ѵ�
	printf("result1: %d \n", result1); // num1�� num2 ���� �����Ƿ� ������ �������� ���������� '0' �̴�
	printf("result2: %d \n", result2); // num1�� num2 ���� �۴� �׷��Ƿ� �۰ų� ���ٴ� ������ �����Ͽ����Ƿ� '1' �̴�
	printf("result3: %d \n", result3); // ���� ���� x �׷��Ƿ� 0
	return 0;
}