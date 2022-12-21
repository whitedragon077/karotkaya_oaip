#include "input.h"

void input_string(char** string)
{
	int input;
	int i = 0;
	rewind(stdin);
	while ((input = getchar()) != EOF && input != '\n')
	{
		(*string)[i++] = input;
		(*string) = (char*)realloc((*string), (i + 1) * sizeof(char));
	}
	(*string)[i] = '\0';
}

void input_choice(int* choice)
{
	while (scanf_s("%d", choice) == 0 || (*choice) > 3 || (*choice) < 1 || getchar() != '\n')
	{
		output_wrong_input();
		rewind(stdin);
	}
}

void output_wrong_input()
{
	printf("Wrong input\n");
}