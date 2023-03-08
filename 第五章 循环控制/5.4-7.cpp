#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, t;
	scanf("%d/%d", &a, &b);

	if (a < b)
		t = a;
	else
		t = b;

	for (int i = t; i >= 2; i--)
	{
		if(a%i==0)
			if (b % i == 0)
			{
				a /= i;
				b /= i;
				break;
			}
	}
	printf("%d/%d\n", a, b);

	return 0;
}