#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void minmax(int a[], int length, int* max, int* min);

int main()
{
	int a[] = { 1,5,9,7,4,5,1,5,6,4,44,55,11,197,45,6,0 };
	int max, min;
	printf("main sizeof(a[])=%lu\n", sizeof(a));
	printf("main a=%p\n", a);
	minmax(a, sizeof(a) / sizeof(a[0]), &max, &min);
	printf("max=%d min=%d\n", max, min);
	printf("main a[0]=%d\n", a[0]);
	return 0;
}

void minmax(int a[], int length, int* max, int* min)
{
	int i;
	printf("minmax sizeof(a[])=%lu\n", sizeof(a));
	printf("minmax a=%p\n", a);
	a[0] = 1000;
	*min = *max = a[0];
	for (i = 1; i < length; i++)
	{
		if (a[i] < *min)
			*min = a[i];
		if (a[i] > *max)
			*max = a[i];
	}
}