#include <stdio.h>

int main(void)
{
	double rad;
	double area;
	printf("���� ������ �Է�: ");
	scanf_s("%lf", &rad);	//	lf (��f)

	area = rad*rad * 3.1415;
	printf("���� ����: %f \n", area);
	return 0;
}