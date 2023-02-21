#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()//进制转换
{
	int number = 0;
	scanf("%d", &number);
	int a = 0, b = 0;
	a = number / 16;
	b = number % 16;
	printf("%d", a * 10 + b);

	return 0;
}