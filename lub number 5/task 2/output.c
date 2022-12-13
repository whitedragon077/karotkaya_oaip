#include "output.h"

void array_output(const int row, int*** array)
{
	for (int i = 0; i < row; i++)
	{
		int j = 0;
		while ((*array)[i][j] != 0)
		{
			printf("%d ", (*array)[i][j]);
			j++;
			if ((*array)[i][j] == 0)
			{
				printf("\n");
			}
		}
	}
}