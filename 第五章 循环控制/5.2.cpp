#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()//素数的判断
//{
//	int x;
//	scanf("%d", &x);
//	int i;
//	int isPrime = 1;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			isPrime = 0;
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	if (isPrime == 1)
//		printf("is that");
//	else
//		printf("not that");
//	return 0;
//}

//int main()//100以内的素数
//{
//	int x;
//	int cnt = 0;
//	for(x=2;cnt<50;x++)
//	{
//		int i;
//		int isPrime = 1;
//		for (i = 2; i < x; i++)
//		{
//			if (x % i == 0)
//			{
//				isPrime = 0;
//				break;
//			}
//		}
//			if (isPrime == 1)
//			{
//				printf("%d\t", x);
//				cnt++;
//				if (cnt % 5 == 0)
//					printf("\n");
//			}
//	}
//	return 0;
//}

//int main()
//{
//	int x;
//	int one, two, five;
//	scanf("%d", &x);
//	for (one = 1; one < x * 10; one++)
//	{
//		for (two = 1; two < x * 10 / 2; two++)
//		{
//			for (five = 1; five < x * 10 / 5; five++)
//			{
//				if (one + two * 2 + five * 5 == x * 10)
//					printf("you can use %d one ,%d two and %d five to get %d .\n", one, two, five,x);
//			}
//		}
//	}
//
//	return 0;
//}

//int main()//列举一种可能终止循环
//{
//	int x;
//	int exit = 0;
//	int one, two, five;
//	scanf("%d", &x);
//	for (one = 1; one < x * 10; one++)
//	{
//		for (two = 1; two < x * 10 / 2; two++)
//		{
//			for (five = 1; five < x * 10 / 5; five++)
//			{
//				if (one + two * 2 + five * 5 == x * 10)
//				{
//					printf("you can use %d one ,%d two and %d five to get %d .\n", one, two, five, x);
//					exit = 1;
//					break;
//				}
//			}
//			if (exit == 1)
//				break;
//		}
//		if (exit == 1)
//			break;
//	}
//	return 0;
//}

int main()//列举一种可能终止循环
{
	int x;
	int exit = 0;
	int one, two, five;
	scanf("%d", &x);
	for (one = 1; one < x * 10; one++)
	{
		for (two = 1; two < x * 10 / 2; two++)
		{
			for (five = 1; five < x * 10 / 5; five++)
			{
				if (one + two * 2 + five * 5 == x * 10)
				{
					printf("you can use %d one ,%d two and %d five to get %d .\n", one, two, five, x);
					goto out;
				}
			}
		}
	}
	out:
	return 0;
}