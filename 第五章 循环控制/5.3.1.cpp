#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()//前N项求和
{
	int x;
	double sum = 0;
	double sign = 1.0;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		//if (i % 2 == 0)
		//	sum -= 1.0 / i;
		//else
		//	sum += 1.0 / i;
		sum += sign / i;
		sign = -sign;
	}
	printf("f(%d)=%f\n", x, sum);
	return 0;
}