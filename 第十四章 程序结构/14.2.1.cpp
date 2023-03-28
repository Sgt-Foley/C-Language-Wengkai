#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define PI 3.14159
#define test "%f\n"
#define PI2 2*PI //PI2=PI*2

int main(int argc, char const argv[])
{
	printf(test, 2 * PI * 3);
	printf("%s:%d\n", __FILE__, __LINE__);
	printf("%s,%s\n", __DATE__, __TIME__);
	return 0;
}