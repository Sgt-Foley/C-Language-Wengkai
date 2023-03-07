#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()//改进版
//{
//	int n;
//	scanf("%d", &n);
//	int i = n;
//	int fact = 1;
//	for (n=n; n >= 1; n--)
//	{
//		fact *= n;
//	}
//	printf("%d!=%d\n", i, fact);
//	return 0;
//}

int main()
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("i=%d\n", i);
	}
	printf("last i=%d\n", i);
	return 0;
}