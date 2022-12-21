#include "sort.h"

void insert_sort(char*** string, const int argc)
{
	for (int i = 2; i < argc; i++)
	{
		for (int j = i; j > 1 && str_min_len_word((*string)[j - 1], strlen((*string)[j - 1])) > str_min_len_word((*string)[j], strlen((*string)[j])); j--)
		{
			char* first_temp = (char*)calloc(1, 255);

			strcpy(first_temp, (*string)[j]);
			strcpy((*string)[j], (*string)[j - 1]);
			strcpy((*string)[j - 1], first_temp);
			free(first_temp);
		}
	}
}