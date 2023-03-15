#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	const char* s1 = "Hello World";
	const char* s2 = "Hello World";
	char s3[] = "Hello World";
	printf("s1=%p\n", s1);
	printf("s2=%p\n", s2);
	printf("&i=%p\n", &i);
	printf("s3=%p\n", s3);
	return 0;
}