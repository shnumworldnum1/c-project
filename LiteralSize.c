#include <stdio.h>

int main(void)
{
	printf("literal int size: %d \n", sizeof(7));	// sizeof �϶� �������� int�� ��Ÿ���� �ش�
	printf("literal double size: %d \n", sizeof(7.14));		//   "   �Ǽ��� double�� �ٲپ ��Ÿ���� �ش�.
	printf("literal char size: %d \n", sizeof('A'));		// ch�� ���� sizeof( ) <-��ȣ �ȿ��ٰ� ������ �ʴ� �̻� ������ int �� ��ġ�� ���̴�.
	return 0;
}