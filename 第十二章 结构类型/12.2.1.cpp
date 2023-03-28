#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

//int main(int argc,char const *argv[])
//{
//	struct date today = { 03,20,2023 };
//	struct date thismonth;
//	struct date day;
//
//	thismonth.month = 3;
//	thismonth.year = 2023;
//	day = today;
//	day.year = 2015;
//
//	printf("today is %i-%i-%i\n", today.day, today.month, today.year);
//	printf("thismonth is %i-%i\n", thismonth.month,thismonth.year);
//	printf("day is %i-%i-%i\n", day.day, day.month, day.year);
//
//	return 0;
//}

int main(int argc, char const* argv[])
{
	struct date today = { 03,20,2023 };
	struct date *ptoday=&today;

	printf("today is %i-%i-%i\n", today.month, today.day, today.year);
	printf("today at %p\n", *ptoday);

	return 0;
}