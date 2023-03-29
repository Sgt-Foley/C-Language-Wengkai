#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "array.h"
#include <stdlib.h>

int main(int argc, char const* argv[])
{
	Array a = array_creat(100);
	array_get(&a, 0);//printf("size %d\n", array_size(&a));
	array_set(&a, 0, 10);//*array_at(&a, 0) = 10;
	printf("array[0]=%d\n", *array_at(&a, 0));
	int number;
	int cnt = 0;
	while (number!=-1)
	{
		scanf("%d", &number);
		if (number != -1)
			*array_at(&a, cnt++) = number;
	};

	array_free(&a);

	return 0;
}

