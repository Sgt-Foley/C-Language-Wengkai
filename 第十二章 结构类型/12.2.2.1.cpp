#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct point
//{
//	int x;
//	int y;
//};
//
//void getStruct(struct point);
//void output(struct point);
//
//int main(int argc, char const* argv[])
//{
//	struct point y = { 0,0 };
//	getStruct(y);
//	output(y);
//
//	return 0;
//}
//
//void getStruct(struct point p)
//{
//	scanf("%d", &p.x);
//	scanf("%d", &p.y);
//	printf("getStruct p = %d,%d\n", p.x, p.y);
//}
//
//void output(struct point p)
//{
//	printf("output p = %d,%d\n", p.x, p.y);
//}

struct point
{
	int x;
	int y;
};

struct point getStruct(void);
void output(struct point);

int main(int argc, char const* argv[])
{
	struct point y = { 0,0 };
	y = getStruct();
	output(y);

	return 0;
}

struct point getStruct(void)
{
	struct point p;
	scanf("%d", &p.x);
	scanf("%d", &p.y);
	return p;
}

void output(struct point p)
{
	printf("output p = %d,%d\n", p.x, p.y);
}