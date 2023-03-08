#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number, n;
	int inp;
	int count = 0;
	int finish = 0;
	scanf("%d %d", &number, &n);
	do
	{
		scanf("%d", &inp);
		count++;
		if (inp < 0)
		{
			printf("Game over\n");
			finish = 1;
		}
		else if (inp > number)
			printf("too big\n");
		else if (inp < number)
			printf("too small\n");
		else {
			if (count == 1)
				printf("Bingo\n");
			else if (count <= 3)
				printf("Lucky you\n");
			else printf("Good guess\n");
			finish = 1;
		}
		if(count==n)
			if (!finish)
			{
				printf("Game over");
				finish = 1;
			}
	} while (!finish);
	return 0;
}