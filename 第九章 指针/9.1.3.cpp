#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void swap(int* pa, int* pb);
//
//int main()
//{
//	int a = 5;
//	int b = 6;
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//
//void swap(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}

void minmax(int a[], int length, int* max, int* min);

int main()
{
	int a[] = { 1,5,9,7,4,5,1,5,6,4,44,55,11,197,45,6,0 };
	int max, min;
	minmax(a, sizeof(a) / sizeof(a[0]), &max, &min);
	printf("max=%d min=%d\n", max, min);
	return 0;
}

void minmax(int a[], int length, int* max, int* min)
{
	int i;
	*min = *max = a[0];
	for (i = 1; i < length; i++)
	{
		if (a[i] < *min)
			*min = a[i];
		if (a[i] > *max)
			*max = a[i];
	}
}