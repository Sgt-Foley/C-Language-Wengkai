#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int x = 0, n = 1;
//	scanf("%d", &x);
//	if (x > 999)
//		n = 4;
//	else if (x > 99)
//		n = 3;
//	else if (x > 9)
//		n = 2;
//	else
//		n = 1;
//	printf("%d", n);
//
//	return 0;
//}

//int main()//循环判断几位数
//{
//	int x = 0, n = 0;
//	scanf("%d", &x);
//	x = x / 10;
//	n = 1;
//	while (x > 0)
//	{
//		x = x / 10;
//		n++;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main()//改进版
//{
//	int x = 0, n = 0;
//	scanf("%d", &x);
//	do 
//	{
//		x = x / 10;
//		n++;
//	} while (x > 0);
//
//	printf("%d", n);
//	return 0;
//}