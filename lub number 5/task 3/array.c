#include "array.h"

void memory_allocate(const int row, const int col, int*** array)
{
	*array = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
	{
		(*array)[i] = (int*)calloc(col, sizeof(int));
	}
}

void delete_elements(int* row, const int col, int*** array)
{
	for (int i = 0; i < (*row); i++)
	{
		int zero_counter = 0;
		find_cols_with_2_zero(i, col, array, &zero_counter);
		if (zero_counter >= 2)
		{
			(*row)--;
			for (int j = i; j < (*row); j++)
			{
				for (int k = 0; k < col; k++)
				{
					(*array)[j][k] = (*array)[j + 1][k];
				}
			}
			i--;
			(**array) = (int**)realloc((**array), (*row) * sizeof(int*));
		}
	}
}

void find_cols_with_2_zero(const int i, const int col, int*** array, int* zero_counter)
{
	for (int j = 0; j < col; j++)
	{
		if ((*array)[i][j] == 0)
		{
			(*zero_counter)++;
		}
	}
}

void free_array(const int row, int** array)
{
	for (int i = 0; i < row; i++)
	{
		free(*(array + i));
	}
}