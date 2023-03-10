#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	printf("%ld %ld\n", sizeof(int), sizeof(a));
//
//	return 0;
//}

//int main()
//{
//	char c = 255;
//	unsigned char d = 255;
//	int i = 255;
//	printf("c=%d d=%d i=%d \n", c, d, i);
//
//	return 0;
//}

//int main()
//{
//	char c = 012;
//	int i = 0x12;
//	printf("c=%d i=%d\n", c, i);
//	return 0;
//}

int main()
{
	char c;
	char i;
	scanf("%d %c", &i, &c);
	printf("i=%d c=%d\n", i, c);
	return 0;
}