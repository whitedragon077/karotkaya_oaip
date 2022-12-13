#include<stdio.h>
#include"input.h"
#include"array.h"
#include"output.h"

int main()
{
	int row, col;
	int** array;
	printf("Enter the array rows \n");
	size_input(&row);
	printf("Enter the array cols \n");
	size_input(&col);
	memory_allocate(row, col, &array);
	array_input(row, col, &array);
	array_output(row, col, &array);
	delete_elements(&row, col, &array);
	printf("The result is: \n");
	array_output(row, col, &array);
	free_array(row, array);

}