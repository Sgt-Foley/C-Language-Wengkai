#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point
{
	int x;
	int y;
};

struct rectangle
{
	struct point p1;
	struct point p2;
};

int main(int argc, char const* argv[])
{
	int i;
	struct rectangle box[] = {
		{{1,2},{3,4}},
		{{2,3},{3,4}}
	};
	for (i = 0; i < 2; i++)
		printf("%d %d to %d %d\n", box->p1.x, box->p1.y, box->p2.x, box->p2.y);
	return 0;
}