#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
size_t mylen(const char* s);

int main(int argc, char const* argv[])
{
	char line[] = "Hello";
	printf("strlen=%lu\n", strlen(line));
	printf("mylen=%lu\n", mylen(line));
	printf("sizeof=%lu\n", sizeof(line));

	return 0;
}

size_t mylen(const char* s)
{
	int cnt = 0;
	int idx = 0;
	while (s[idx] != '\0')
	{
		idx++;
		cnt++;
	}
	return cnt;
}