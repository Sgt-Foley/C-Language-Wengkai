#pragma once

typedef struct _node
{
	int value;
	struct _node* next;
}Node;

typedef struct _list
{
	Node* head;
}List;

void add(List* pList, int number);
void print(List* pList);
void search(List* pList, int number);
void distinct(List* pList, int number);
void clear(List* pList);