#include "input_output.h"

void size_input(int* size)
{
	printf("Enter the array size \n");
	while (scanf_s("%d", size) == 0 || *size < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void array_input(const int size, int** array)
{
	for (int i = 0; i < size; i++)
	{
		while (scanf_s("%d", &(*array)[i]) == 0 || getchar() != '\n')
		{
			printf("Wrong input.\n");
			rewind(stdin);
		}
	}
}

void array_output(const int size, int** array)
{
	printf("The result is:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", (*array)[i]);
	}
}