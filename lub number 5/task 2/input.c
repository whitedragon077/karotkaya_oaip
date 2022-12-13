#include "input.h"

void size_input(int* row)
{
	printf("Enter the array row \n");
	while (scanf_s("%d", row) == 0 || *row < 0 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
}

void array_input(const int row, int*** array)
{
	for (int i = 0; i < row; i++)
	{
		int j = 0;
		while (printf("elem[%d][%d] = ", i, j), scanf_s("%d", &(*array)[i][j]) != 0 && (*array)[i][j] != 0)
		{
			(*array)[i] = (int*)realloc((*array)[i], (j + 2) * sizeof(int));
			j++;
		}
	}
}

