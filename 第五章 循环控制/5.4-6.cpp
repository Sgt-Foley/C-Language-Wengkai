#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	double a = 2.0, b = 1.0;
	double sum = 0;
	for (int i = 1; i <= n; i++)
	{
		int t = 0;
		sum = a / b + sum;
		t = a;
		a = b + a;
		b = t;
	}
	printf("%.2f\n", sum);
	return 0;
}