#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int amount_rows_cols(int* row, int* col);
int choice_check();
void arry_input_check(int arr[100][100], int col, int row);
void arr_rand(int arr[100][100], int col, int row);
void find_first_descending_row(int arr[100][100], int col, int row, int* first_descending_row);
void ascending_row(int arr[100][100], int col, int row, int* first_descending_row);
void output_arry(int arr[100][100], int row, int col);


int main()
{
	int	arr[100][100], col, row, choice = 0, max_elem = 0, first_descending_row = INT_MAX;

	amount_rows_cols(&row, &col);
	choice = choice_check();
	switch (choice)
	{
	case 1:
		arry_input_check(arr, col, row);
		break;
	case 2:
		arr_rand(arr, col, row);
		break;
	default:
		return 0;
		break;
	}
	output_arry(arr, row, col);
	find_first_descending_row(arr, col, row, &first_descending_row);
	if (first_descending_row == INT_MAX)
		printf("No descendeing row");
	else
	{
		ascending_row(arr, col, row, &first_descending_row);
		printf("New arry:\n");
		output_arry(arr, row, col);
	}
}

int choice_check()
{
	int input;
	printf("Print 1 for enter the elements manually or print 2 for random numbers\n");
	while (scanf_s("%d", &input) < 1 || input > 2)
	{
		printf_s("Wrong input\n");
		rewind(stdin);
	}
	return input;
}

int amount_rows_cols(int* row, int* col)
{

	printf("Enter cols from 1 to 100\n");
	while (scanf_s("%d", col) == 0 || *col >= 101 || *col < 1)
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
	printf("Enter rows from 1 to 100\n");
	while (scanf_s("%d", row) == 0 || *row >= 101 || *row < 1)
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}

}



void arry_input_check(int arr[100][100], int col, int row)
{
	for (int i = 0; i < row; i++)
	{
		printf("Enter the elements of the %d row\n", i + 1);
		for (int j = 0; j < col; j++)
		{
			while (scanf_s("%d", &arr[i][j]) == 0)
			{
				printf("Wrong input.\n");
				rewind(stdin);
			}
		}
	}
}

void arr_rand(int arr[100][100], int col, int row)
{
	srand(time(NULL));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 200 - 100;
		}

	}
}



void find_first_descending_row(int arr[100][100], int col, int row, int* first_descending_row)
{
	int temp = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] < arr[i][j + 1])
				break;
			if ((j + 1) == col)
				(*first_descending_row) = i;
		}
		if ((*first_descending_row) == i)
			break;
	}
}

void ascending_row(int arr[100][100], int col, int row, int* first_descending_row)
{
	int temp;
	temp = arr[*first_descending_row][0];
	for (int i = 0; i < col; i++)
	{
		temp = arr[*first_descending_row][i];
		arr[*first_descending_row][i] = arr[*first_descending_row][col - 1];
		arr[*first_descending_row][col - 1] = temp;
		col--;
	}

}

void output_arry(int arr[100][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}
}