#include "output.h"

void output_array(const int size, int** array)
{
	printf("The result is:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d\t", (*array)[i]);
	}
}