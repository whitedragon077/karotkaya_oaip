#include <stdio.h>
#include<stdlib.h>
#include "array.h"
#include "input.h"
#include "output.h"

int main()
{
	int row;
	size_input(&row);
	int** array;
	memory_allocate(row, 1, &array);
	printf("Enter the elements of array\n");
	array_input(row, &array);
	array_output(row, &array);
	delete_max_elements(row, &array);
	printf("\nThe result is:\n");
	array_output(row, &array);
	free_array(row, array);

}