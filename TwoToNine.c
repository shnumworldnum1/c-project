#include <stdio.h>

int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10)	//	2�ܺ��� 9�ܱ��� �ݺ�
	{
		is = 1;
		while (is < 10)
		{
			printf("%d��%d=%d \n", cur, is, cur * is);
			is++;												//		13, 14�࿡�� 2*1 ���� 2*9���� ������ �������ְ�
		}
		cur++;			//	�׸��� ���� ���� 3�� 4, 5, 6, 7, 8, 9 �ܱ��� ������� �ö󰡴� ���̴�
	}
	return 0;
}