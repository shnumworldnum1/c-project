#include <stdio.h>

int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10)	//	2단부터 9단까지 반복
	{
		is = 1;
		while (is < 10)
		{
			printf("%d×%d=%d \n", cur, is, cur * is);
			is++;												//		13, 14행에서 2*1 에서 2*9까지 나오게 설정되있고
		}
		cur++;			//	그리고 나서 이제 3단 4, 5, 6, 7, 8, 9 단까지 순서대로 올라가는 것이다
	}
	return 0;
}