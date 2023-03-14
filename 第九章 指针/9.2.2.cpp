#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	int* a;
	int i;
	scanf("%d", &number);
	a = (int*)malloc(number * sizeof(int));
	for (i = 0; i < number; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = number - 1; i >= 0; i--)
	{
		printf("%d\n", a[i]);
	}
	return 0;
	free(a);
}

