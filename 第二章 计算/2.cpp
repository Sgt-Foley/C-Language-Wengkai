#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d", &a, &b);
	int hour = a / 100, minute = a % 100;
	c = hour * 60 + minute;
	printf("%d%d", (b + c)/60,(b+c)%60);

	return 0;
}