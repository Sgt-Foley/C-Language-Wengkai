#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int a[5][5] = {
//		{0,1,2,3,4}
//	};
//	int i, j;
//	for ( i = 0; i < 3; i++)
//		for ( j = 0; j < 5; j++)
//		{
//			a[i][j] = i * j;
//		}
//	return 0;
//}

int main()
{
	int m[][2] = { 1,4,7,2,5,8,3,6,9 };
	int i, j, k = 2;
		for (i = 0; i < 2; i++)
		{
			printf("%d\n", m[0][i]);
		}

	return 0;
}