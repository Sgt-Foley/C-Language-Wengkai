#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()//猜数
{
	srand(time(0));
	int number = rand() % 100 + 1;
	int count = 0;
	int a = 0;
	do {
		scanf("%d", &a);
		if (a > number)
			printf("too big\n");
		else if (a < number)
			printf("too small\n");
		count++;
	} while (a != number);
	printf("good,you take %d to get the number!", count);
	return 0;
}