#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);

	if (x < 0)
	{
		printf("fu ");
		x = -x;
	}

	int mask = 1;
	int t = x;

	while (t > 9)
	{
		t /= 10;
		mask *= 10;
	}

	do
	{
		int d = x / mask;
		switch (d)
		{
		case 0:printf("1"); break;
		}
		x %= mask;
		mask /= 10;


	} while (mask > 0);


	return 0;
}