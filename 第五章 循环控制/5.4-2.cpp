#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i = 1;
	int first = 1;//first作为起始数
	while (i < n)//用循环产生几位数
	{
		first *= 10;
		i++;
	}
	
	i = first;

	while (i < first * 10)//循环进行到不到数值的最接近整数
	{
		int t = i;
		int sum = 0;
		do
		{
			int d = t % 10;
			t /= 10;
			
			int p = 1;
			int j = 0;
			while (j < n)//用循环产生次方
			{
				p *= d;
				j++;
			}
			sum += p;
		} while (t > 0);
		if (sum == i)
			printf("%d\n", i);
		
		i++;
	}

	return 0;
}