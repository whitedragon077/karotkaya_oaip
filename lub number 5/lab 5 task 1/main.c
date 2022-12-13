#include <stdio.h>
#include<stdlib.h>
#include "array.h"
#include "input_output.h"

int main()
{
	int size;
	size_input(&size);
	int* array = (int*)calloc(size, sizeof(int));
	printf("Enter the elements of array\n");
	array_input(size, &array);
	delete_elements(&size, &array);
	array_output(size, &array);
	free(array);
}

