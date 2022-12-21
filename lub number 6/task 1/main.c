#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"array.h"
#include"sort.h"
#include "input_and_output.h"



int main()
{
	int* array;

	int* array_debug;
	allocate_memory(10000, &array_debug);
	allocate_memory(10000, &array);
	input_debug(10000, &array);
	input_debug(10000, &array_debug);
	clock_t start_array = clock();
	insert_sort(10000, &array);
	clock_t end_array = clock();
	float second1 = (float)(end_array) / CLOCKS_PER_SEC;
	clock_t start_array_debug = clock();
	shell_sort_debug(10000, &array_debug);
	clock_t end_array_debug = clock();
	float second2 = (float)(end_array_debug) / CLOCKS_PER_SEC;
	printf("%f\n", second1);
	printf("%f", second2);

	/*
	int array_size;
	size_of_array(&array_size);
	allocate_memory(array_size, &array);
	array_input(array_size, &array);
	array_output(array_size, &array);
	printf("\nThe result is: \n");
	shell_sort(array_size, &array);
	array_output(array_size, &array);
*/
}

	





}