#include "strings.h"

int string_find_k_word(char** string, int k)
{
	int i = 0, index = 0;

	while ((*string)[i] != '\0')
	{
		if ((i == 0 && string_is_letter((*string)[i]) == 1) ||
			(string_is_letter((*string)[i - 1]) == 0 && string_is_letter((*string)[i]) == 1))
		{
			index++;
		}

		if (index == k)
		{
			return i;
		}
		i++;
	}
	return -1;
}

int string_end_k_word(char** string, int start)
{
	int i = start + 1;
	int index = 0;
	while ((*string)[i] != '\0' && (*string)[i] != ' ')
	{
		if (string_is_letter((*string)[i + 1]) != 0 && string_is_letter((*string)[i]) == 1)
		{
			index++;
		}
		i++;
	}
	return start + index + 1;
}

int string_is_letter(char** string)
{
	if ((string >= 'a' && string <= 'z') || (string >= 'A' && string <= 'Z'))
	{
		return 1;
	}
	return 0;

}

void string_reverse(char** string, int start, int end)
{
	for (int i = start, j = end; i <= (end - start) / 2 + start; i++, j--) 
	{
		char temp = (*string)[i];
		(*string)[i] = (*string)[j];
		(*string)[j] = temp;
	}
}

void string_insert(char** first_string, char** second_string, char char_)
{
	int j = 0;
	for (int i = 0; i < strlen(*first_string); i++)
	{
		if ((*first_string)[i] == char_)
		{
			char* sub_string = (char*)malloc(strlen(*first_string) + strlen(*second_string) + 1);
			for (j = 0; j <= i; j++)
			{
				sub_string[j] = (*first_string)[j];
			}

			for (j = 0; (*second_string)[j] != '\0'; j++)
			{
				*(sub_string + j + i + 1) = *((*second_string) + j);
			}

			for (j = 1; *((*first_string) + i + j) != '\0'; j++)
			{
				*(sub_string + i + strlen(*second_string) + j) = *((*first_string) + i + j);
			}
			*(sub_string + i + strlen(*second_string) + j) = '\0';
			(*first_string) = (char*)realloc((*first_string), strlen((*first_string)) + strlen((*second_string)));
			(*first_string) = sub_string;
			i += strlen((*second_string));
		}
	}
} 

