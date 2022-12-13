#include "array.h"

void  delete_elements(int* size, int** array)
{
	for (int i = 0; i < *size; i++)
	{
		if ((*array)[i] % 11 == 0)
		{
			(*size)--;
			for (int j = i; j < (*size); j++)
			{
				(*array)[j] = (*array)[j + 1];
			}
			*array = (int*)realloc(*array, (*size) * sizeof(int));
			i--;

		}
	}
}

 