#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int t;
	if (n > m)
	{
		t = n;
		n = m;
		m = t;
	}
	int count = 0;
	int sum = 0;

	for (int i = n; i <= m; i++)
	{			
		int isPrime = 1;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime)
		{
			count++;
			sum += i;
		}
	}
	printf("%d %d\n", count, sum);

	return 0;
}