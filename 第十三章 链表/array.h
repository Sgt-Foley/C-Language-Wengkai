#pragma once
#ifndef _ARRAY_H_
#define _ARRAY_H_

const int BLOCK_SIZE = 20;

typedef struct
{
	int* array;
	int size;
}Array;

Array array_creat(int init_size);
void array_free(Array* a);
int array_size(const Array* a);
int* array_at(Array* a, int index);
int array_get(const Array* a, int index);
int array_set(Array* a, int index, int value);
void array_inflate(Array* a, int more_size);

#endif