#include <stdio.h>

int main(void)
{
	int num1 = 12;
	int num2 = 12;
	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); 
	printf("num1: %d \n\n", num1); // �������� num1++ �� �Ǿ��� ������ 9���� ���� +1�� �ȴ� 

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); // ++num2 ��ó�� ���̸� 12���� ���� +1�̵ǰ� 
	printf("num2: %d \n", num2); // 13���� ���� +1�� �ȴ�
	return 0;
}