#include <stdio.h>
#define HIT_NUM		5

int main(void)
{
#if HIT_NUM==5		// ���� if�� ifndef�� �ٲٰ� �ȴٸ� �������� �ʴ� ���� 9���� �����Եȴ�.
	puts("��ũ�� ��� HIT_NUM�� ���� 5�Դϴ�.");
#else
	puts("��ũ�� ��� HIT_NUM�� ���� 5�� �ƴմϴ�.");
#endif

	return 0;
}