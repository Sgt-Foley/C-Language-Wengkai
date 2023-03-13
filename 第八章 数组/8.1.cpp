#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int number[100];//定义数组
//	int x;
//	int count = 0;
//	scanf("%d", &x);
//	while (x != -1)
//	{
//		number[count] = x;//数组赋值
//		{
//			int i;
//			for (i = 0; i <= count; i++)
//			{
//				printf("%d\t", number[i]);
//			}
//		printf("\n");
//		}//遍历数组
//		count++;
//		scanf("%d", &x);
//	}
//	return 0;
//}

int main()
{
	int const number = 10;
	int count[number];
	int x;
	scanf("%d", &x);
	for (int i = 0; i < number; i++)
	{
		count[i] = 0;
	}
	while (x != -1)
	{
		if (x >= 0 && x < number)
		{
			count[x]++;
		}
		scanf("%d", &x);
	}
	for (int i = 0; i < number; i++)
	{
		printf("%d=%d\n", i, count[i]);
	}
	return 0;
}