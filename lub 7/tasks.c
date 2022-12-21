#include "task1.h"
#include "strings.h"


int task1()
{
	char* string = (char*)calloc(1, 1);
	int	k = 0;
	int start, end;
	input_string(&string);
	scanf_s("\n%d", &k);
	start = string_find_k_word(&string, k);
	end = string_end_k_word(&string, start);
	string_reverse(&string, start, end);
	printf("%s", string);
	free(string);

}

