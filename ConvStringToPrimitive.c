#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[20];
	printf("���� �Է�: ");
	scanf_s("%s", str);
	printf("%d \n", atoi(str));

	printf("�Ǽ� �Է�: ");
	scanf_s("%s, str");
	printf("%g \n", atof(str));
	return 0;
}