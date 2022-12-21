#include "array.h"

void allocate_memory(const int array_size, int** array)
{
	*array = (int*)malloc(array_size * sizeof(int));
}

int array_find_first_odd(int array_size, int** array)
{

	for (int i = 0; i < array_size; i++)
	{
		if ((*array)[i] % 2 != 0)
		{
			return i;
		}
	}
	return -1;
}

int array_find_first_negative(int array_size, int** array)
{
	for (int i = 0; i < array_size; i++)
	{
		if ((*array)[i] < 0)
		{
			return i;
		}
	}
	return -1;
}

void array_swap(int** array, int i, int j)
{
	int temp = (*array)[i];
	(*array)[i] = (*array)[j];
	(*array)[j] = temp;
}

void input_debug(const int size, int** array)
{

	for (int i = 10000; i > 0; i--)
	{
		(*array)[i] = i;
	}
}
