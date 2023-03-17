#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int mycmp(const char* a, const char* b);
int lastcmp(const char* a, const char* b);

int main(int argc, char const* argv[])
{
	char s1[] = "abc";
	char s2[] = "abc ";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", mycmp(s1, s2));
	printf("%d\n", lastcmp(s1, s2));
	return 0;
}

int mycmp(const char* a, const char* b)
{
	int cnt = 0;
	int idx = 0;
	while(a[idx]==b[idx]&&a[idx]!='\0')
	{
		//if (a[idx] != b[idx])
		//	break;
		//else if (a[idx] == '\0')
		//	break;
		idx++;
	}
	return a[idx] - b[idx];
}

int lastcmp(const char* a, const char* b)
{
	while (*a == *b && *a != '\0')
	{
		*a++;
		*b++;
	}
	return *a - *b;
}