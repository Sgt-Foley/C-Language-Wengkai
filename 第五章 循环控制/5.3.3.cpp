#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()//求最大公约数(枚举法)
//{
//	int a, b;
//	int min;
//	scanf("%d %d", &a, &b);
//	if (a < b)
//		min = a;
//	else
//		min = b;
//	int ret = 0;
//	for (int i = 1; i <= min; i++)
//	{
//		if (a % i == 0)
//			if (b % i == 0)
//				ret = i;
//	}
//	printf("%d\n",ret);
//	return 0;
//}

int main()//最大公约数(辗转相除法)
{
	int a, b, t;
	scanf("%d %d", &a, &b);
	while (b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	printf("%d\n", a);
	return 0;
}