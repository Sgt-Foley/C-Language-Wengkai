#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int f(void);

int gAll = 12;

int main(int argc, char const* argv[])
{
	f();
	return 0;
}

int f(void)
{
	int k, j;
	static int all = 1;
	printf("&gAll=%p\n", &gAll);
	printf("&all=%p\n", &all);
	printf("&k=%p\n", &k);
	printf("&i=%p\n", &j);
	//printf("in %s all=%d\n", __func__, all);
	//all += 2;
	//printf("agn %s all=%d\n", __func__, all);
	return all;
}