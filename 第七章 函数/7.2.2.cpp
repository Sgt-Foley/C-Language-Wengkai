#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int a, int b);

int main()
{
	int a = 5, b = 6;
	swap(a, b);
	printf("a=%d b=%d", a, b);
	if (a < b)
	{
		int i = 10;
	}
	return 0;
}

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}