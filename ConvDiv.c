#include <stdio.h>

int main(void)
{
	int num1 = 3, num2 = 4;
	double divResult;                                //   int / int ���ϸ� ������ ������ ���̱� ������  0�� ���´� 
	divResult = num1 / num2;						//   ���࿡ double / double�� �ϸ� �Ҽ������� ���� 0.75���Ȱ�
	printf("������ ���: %f \n", divResult);
	return 0;
}