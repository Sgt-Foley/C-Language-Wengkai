#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()//发射
{
	int count = 100;
	while (count >= 0)
	{
		printf("%d\n", count);
		count--;
	}
	printf("up");
	return 0;
}