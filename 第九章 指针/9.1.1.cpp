#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int p;
//	p = (int)&i;
//	printf("0x%x\n", p);
//	printf("%p\n", &i);
//	printf("%lu\n", sizeof(int));
//	printf("%lu\n", sizeof(&i));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int p;
//	
//	printf("%p\n", &i);
//	printf("%p\n", &p);
//	//printf("%d\n", &p - &i);
//
//	return 0;
//}

int main()
{
	int a[10];
	printf("%p\n", &a);
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);

	return 0;
}