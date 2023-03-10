#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int begin, int end);

int main()
{
	int a, b, c;
	a = 5, b = 6;
	c = sum(1, 10);
	c = sum(a, b);
	c = sum(sum(1,10), b);
	printf("%d\n", c);
	return 0;
}

int sum(int begin, int end)
{
	int i;
	int sum = 0;
	for (i=begin; i <= end; i++)
	{
		sum += i;
	}
	return sum;
}