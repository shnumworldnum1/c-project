#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

int main(void)
{
	Point pos1 = { 1, 2 };
	Point pos2;
	pos2 = pos1;	// pos1�� �ʹ� �� pos2�� �ɹ��� ���簡 �����

	printf("ũ��: %d \n", sizeof(pos1));	// pos1�� ��ü ũ�� ��ȯ
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("ũ��: %d \n", sizeof(pos2));	// pos2�� ��ü ũ�� ��ȯ
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}