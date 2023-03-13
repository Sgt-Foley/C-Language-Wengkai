#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int search(int x, int a[], int length);

int main()
{
	int a[] = { 1,2,2,2,3,3,4,5,5,6,7,7,8,89,23,3,2,4,5 };
	int x;
	int t = 0;
	scanf("%d", &x);
	int length = sizeof(a) / sizeof(a[0]);
	t = search(x, a, length);
	if (t != -1)
		printf("%d at %d", x, t);
	else
		printf("do not have %d", x);
	return 0;
}

int search(int x, int a[], int length)
{
	int ret = -1;
	for (int i = 0; i < length; i++)
	{
		if (x == a[i])
		{
			ret = i;
			break;
		}
	}
	return ret;
}