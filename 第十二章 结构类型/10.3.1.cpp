#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct
{
	int x;
	int y;
}Date;

int main(int argv, char const* argc[])
{
	int i;
	Date test = { 1,2 };
	printf("%d %d\n", test.x, test.y);
	return 0;
}