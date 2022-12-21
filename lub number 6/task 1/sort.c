#include"sort_shell.h"

#include "sort.h"
#include "array.h"

void shell_sort(const int  array_size, int** array)
{
	int first_odd = array_find_first_odd(array_size, array);
	int first_negative = array_find_first_negative(array_size, array);
	if ((first_odd != -1 && first_negative != -1) || (first_odd < first_negative))
	{
		for (int gap = (first_negative - first_odd); gap > first_odd; gap--)
		{
			int is_still_unsorted_data;
			do
			{
				is_still_unsorted_data = 0;
				for (int i = first_odd, j = gap; j < first_negative; i++, j++)
				{
					if ((*array)[i] > (*array)[j] && (*array)[i] % 2 != 0 && (*array)[j] % 2 != 0)
					{
						array_swap(array, i, j);
						is_still_unsorted_data = 1;
					}
				}

			} while (is_still_unsorted_data);
		}
	}
}

void insert_sort(const int  array_size, int** array)
{
	for (int i = 0; i < array_size; i++)
	{
		for (int j = i; j > 0 && (*array)[j - 1] > (*array)[j]; j--)
		{
			array_swap(array, j - 1, j);
		}
	}
}

void shell_sort_debug(const int  array_size, int** array)
{
	for (int gap = array_size / 2; gap > 0; gap /= 2)
	{
		int is_still_unsorted_data;
		do
		{
			is_still_unsorted_data = 0;
			for (int i = 0, j = gap; j < array_size; i++, j++)
			{
				if ((*array)[i] > (*array)[j])
				{
					array_swap(array, i, j);
					is_still_unsorted_data = 1;
				}
			}

		} while (is_still_unsorted_data);
	}

}
