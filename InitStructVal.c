#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNUm[20];
	int age;
};

int main(void)
{
	struct point pos = { 10, 20 };
	struct person man = { "¿”¿±æ∆", "010£≠1212£≠0001", 21 };
	printf("%d %d \n", pos.xpos, pos.ypos);
	printf("%s %s %d \n", man.name, man.phoneNUm, man.age);
	return 0;
} 