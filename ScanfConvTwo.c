#include <stdio.h>

int main(void)
{
	float num1;
	double num2;
	long double num3;

	printf("�Ǽ� �Է�1(e ǥ�������): ");
	scanf_s("%f", &num1);
	printf("�Էµ� �Ǽ� %f \n", num1);

	printf("�Ǽ� �Է�2(e ǥ�������): ");
	scanf_s("%f", &num2);
	printf("�Էµ� �Ǽ� %f \n", num2);

	printf("�Ǽ� �Է�3(e ǥ�������): ");
	scanf_s("%f", &num3);
	printf("�Էµ� �Ǽ� %f \n", num3);
	return 0;
}