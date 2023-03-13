#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a[] = {  2,4,6,3,3,3,5,6 };
//	printf("%lu\n", sizeof(a));
//	printf("%lu\n", sizeof(a[0]));
//	for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++)
//	{
//		printf("%d\t", a[i]);
//	}
//
//	return 0;
//}

int main()
{
	int a[] = { 1,3,5,4,3,6,23,5,6,5,234,6,54,11,6,5,3,4, };
	int x;
	int p = 0;
	scanf("%d", &x);

	for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++)
	{
		if (x == a[i])
		{
			p = i;
			break;
		}
		else
			p = -1;
	}
	if (p != -1)
		printf("%d at %d\n", x, p);
	else
		printf("do not have %d\n", x);
	
	return 0;
}