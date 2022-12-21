#include "task2.h"

int task2()
{
	char* first_string = (char*)calloc(1, 1);
	char* second_string = (char*)calloc(1, 1);
	char char_;
	input_string(&first_string);
	input_string(&second_string);
	scanf_s("%c", &char_);
	string_insert(&first_string, &second_string, char_);
	printf("\n\n%s", first_string);
	free(first_string);
	free(second_string);

}