#define _CRT_SECURE_NO_WARNINGS
#include "list.h"
#include <stdio.h>
#include <stdlib.h>

void add(List* pList, int number)
{
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	Node* last = pList->head;
	if (last)
	{
		while (last->next)
		{
			last = last->next;
		}
		last->next = p;
	}
	else
	{
		pList->head = p;
	}
}

void print(List* pList)
{
	Node* p;
	for (p = pList->head; p; p = p->next)
	{
		printf("%d\t", p->value);
	}
	printf("\n");
}

void search(List* pList, int number)
{
	Node* p;
	int isFound = 0;
	for (p = pList->head; p; p->next)
	{
		if (p->value == number)
		{
			printf("found it\n");
			isFound = 1;
			break;
		}
	}
	if (!isFound)
	{
		printf("not found\n");
	}
}

void distinct(List* pList, int number)
{
	Node* p;
	Node* q;
	for (q=NULL,p = pList->head; p; q = p,p = p->next)
	{
		if (p->value == number)
		{
			if (q)
				q->next = p->next;
			else
				pList->head = p->next;
			free(p);
			break;
		}
	}
}

void clear(List* pList)
{
	Node* q;
	Node* p;
	for (p = pList->head; p; p = p->next)
	{
		q = p->next;
		free(p);
	}
}