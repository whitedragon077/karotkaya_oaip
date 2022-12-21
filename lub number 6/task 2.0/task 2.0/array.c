#include "array.h"

void allocate_memory(const int row, const int col, int*** array)
{
	*array = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
	{
		(*array)[i] = (int*)calloc(col, sizeof(int));
	}
}

int array_sum(int*** array, const int row, const int col)
{
	int sum_array = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if ((*array)[i][j] % 2 == 0)
			{
				sum_array += (*array)[i][j];
			}
		}
	}
	return sum_array;
}
