#include <stdio.h> 

int main(void)
{
	int result;
	int num1, num2;

	printf("���� one: "); // scanf_s = ("���� one: ���� ������ scanf_s = ���ڳ� ���ڸ� �Է� �������ִ� �ٵ� ���ڴ� %c �̴�
	scanf_s("%d", &num1); 
	printf("���� two: "); // scanf_s = ("���� one: ��<- �ٷ� ���⿡ ������ ��Ű�� ���� �Է��� ��ų�� �ִ� ���̴� "); 
	scanf_s("%d", &num2); 

	result=num1+num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}