#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()//整数逆序
{
	int x;
	scanf("%d", &x);
	int digit;
	int ret = 0;
	while (x>0)
	{
		digit = x % 10;
		printf("%d", digit);//输出每次循环个位数
		ret = ret * 10 + digit;
		x /= 10;
	}
	printf("\n%d\n", ret);//输出所有个位数乘
	return 0;
}