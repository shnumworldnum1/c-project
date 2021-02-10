#include <stdio.h>
#define HIT_NUM		5

int main(void)
{
#if HIT_NUM==5		// 만약 if를 ifndef로 바꾸게 된다면 정의하지 않는 것인 9행이 나오게된다.
	puts("매크로 상수 HIT_NUM은 현재 5입니다.");
#else
	puts("매크로 상수 HIT_NUM은 현자 5가 아닙니다.");
#endif

	return 0;
}