#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define cube(x) ((x)*(x)*(x))

int main(int argc, char const* argv[])
{
	int i;
	scanf("%d", &i);
	printf("%d\n", cube(i));
	return 0;
}