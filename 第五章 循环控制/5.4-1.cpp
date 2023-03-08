#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()//输出有错误
{
	int x;
	scanf("%d", &x);
	int count = 0;
	for (int i = x; i < x + 4; i++)
	{
		for (int j = x; j < x + 4; j++)
		{
			for (int k = x; k < x + 4; k++) 
			{
				if (i != j)
				{
					if (i != k)
					{
						if (k != j)
						{
							printf("%d%d%d", i, j, k);
							count++;
						}
					}
				}
				if (count ==6 )
				{
					printf("\n");
					count = 0;
				}
				else
					printf(" ");

			}
		}
	}

	return 0;
}