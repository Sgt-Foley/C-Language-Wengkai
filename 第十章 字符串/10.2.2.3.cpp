#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
char* mycpy(char* dst, const char* src);
//char* lastcpy(char* dst, const char* src);//bug

int main(int argc, char const* argv[])
{
	char s1[] = "abc";
	char s2[] = "bcd";
	strcpy(s1, s2);
	mycpy(s1, s2);
	//lastcpy(s1, s2);//bug
	printf("strcpy s1=%s\n", s1);
	printf("mycpy s1=%s\n", s1);
	//printf("lastcpy=%s\n", s1);//bug
	return 0;
}

char* mycpy(char* dst, const char* src)
{
	int idx = 0;
	while(src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return dst;
}

//char* lastcpy(char* dst, const char* src)//bug
//{
//	char* ret = dst;
//	//while(*src=='\0')
//	//{
//	//	*dst++ = *src++;
//	//}
//	while (*dst++ = *src++);
//	*dst = '\0';
//	return ret;
//}