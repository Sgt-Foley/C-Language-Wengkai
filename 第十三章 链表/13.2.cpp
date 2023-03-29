#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "list.h"


int main(int argc, char const* argv[])
{
	List list;
	list.head = NULL;
	int number;
	do
	{
		scanf("%d", &number);
		if (number != -1)
			add(&list, number);
	} while (number != -1);
	print(&list);
	scanf("%d", &number);
	Node* p;
	search(&list, 0);
	
	return 0;
}
