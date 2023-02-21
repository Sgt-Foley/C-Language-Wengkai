#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()//三位数逆序
{
	int number = 0, a = 0, b = 0, c = 0;
	scanf("%d", &number);
	a = number / 100;
	b = number / 10 % 10;
	c = number % 10;
	printf("%d", c*100+b*10+a);

	return 0;
}