#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int choice_input_check();
int amount_rows_cols(int* row, int* col);
void arr_rand(int arr[100][100], int col, int row);
void arry_input_check(int arr[100][100], int col, int row);
int f_max_elem(int arr[100][100], int row, int col);
int strings_without_zero(int arr[100][100], int row, int col);
void output_arry(int arr[100][100], int row, int col);



int main()
{
	int	arr[100][100], col, row, choice = 0, max_elem = 0;

	amount_rows_cols(&row, &col);
	choice = choice_input_check();
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
	printf("String without zero - %d\n", strings_without_zero(arr, row, col));

	max_elem = f_max_elem(arr, row, col);
	if (max_elem == INT_MIN)
	{
		printf("There is no 2 or more same elements\n");
	}
	else
	{
		printf("Max elem - %d", f_max_elem(arr, row, col));
	}
}

int choice_input_check()
{
	int input;
	printf("Print 1 for enter the elements manually or print 2 for random numbers\n");
	while (scanf_s("%d", &input) < 1 || input > 2 || getchar() != '\n')
	{
		printf_s("Wrong input\n");
		rewind(stdin);
	}
	return input;
}

int amount_rows_cols(int* row, int* col)
{

	printf("Enter cols from 1 to 100\n");
	while (scanf_s("%d", col) == 0 || *col >= 101 || *col < 1 || getchar() != '\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
	}
	printf("Enter rows from 1 to 100\n");
	while (scanf_s("%d", row) == 0 || *row >= 101 || *row < 1|| getchar()!='\n')
	{
		printf("Wrong input.\n");
		rewind(stdin);
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

int f_max_elem(int arr[100][100], int row, int col)
{
	int count = 2, max_elem = INT_MIN;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			int temp = 0;
			for (int k = 0; k < row; k++)
			{
				for (int l = 0; l < col; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						temp++;
					}
				}
			}
			if ((temp >= count) && (arr[i][j] > max_elem))
			{
				max_elem = arr[i][j];
				count = temp;
			}
		}			
	}
	return max_elem;
}

int strings_without_zero(int arr[100][100], int row, int col)
{
	int strings_without_zero = 0;
	for (int i = 0; i < row; i++)
	{
		int temp = 0;
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 0)
			{
				temp++;
			}
		}
		if (temp == 0) ;
	}
	return strings_without_zero;
}

void output_arry(int arr[100][100], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%3.1d \t", arr[i][j]);
		}
		printf("\n");
	}
}