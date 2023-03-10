#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int begin, int end)//函数头：返回类型+函数名+参数表
{
	int i;
	int sum = 0;

	for (i = begin; i <= end; i++)
	{
		sum += i;
	}
	return sum;
}

int main()
{
	int c;
	c=sum(1, 10);
	printf("%d\n", c);
	return 0;
}