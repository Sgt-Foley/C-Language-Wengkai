#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc,char const *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%d:%s\n", i, argv[i]);
	}

	return 0;
}