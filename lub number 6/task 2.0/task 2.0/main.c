#include<stdio.h>
#include<stdlib.h>
#include"array.h"
#include"input_output.h"
#include"sort.h"



int main()
{
	int** array;
	int row;
	int col;
	printf("Enter the array rows \n");
	array_size(&row);
	printf("Enter the array cols \n");
	array_size(&col);
	allocate_memory(row, col, &array);
	array_input(row, col, &array);
	array_output(row, col, &array);
	printf("\nThe result is: \n");
	merge_sort(&array, row, col);
	array_output(row, col, &array);
}
