#include "input_and_output.h"

void size_of_array(int* array_size)
{
	printf("Enter the array size \n");
	while (scanf_s("%d", array_size) == 0 || *array_size < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void array_input(const int array_size, int** array)
{
	printf("Enter the elemenst of array\n");
	for (int i = 0; i < array_size; i++)
	{
		while (scanf_s("%d", &(*array)[i]) == 0 || getchar() != '\n')
		{
			printf("Wrong input.\n");
			rewind(stdin);
		}

	}
}



void array_output(const int array_size, int** array)
{
	for (int i = 0; i < array_size; i++)
	{
		printf("%d ", (*array)[i]);
	}
}