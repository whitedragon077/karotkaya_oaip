#include<stdio.h>
#include<stdlib.h>

void elements_input_check(int arr[], int size);
void rand_input(int arr[], int size);
int check();
int choice_check();
int delete_even(int arr[], int size);

int main()
{
	int arr[100], arr_size = 0, choice = 0;
	arr_size = check();
	choice = choice_check();
	switch (choice)
	{
	case 1:
		elements_input_check(arr, arr_size);
		break;
	case 2:
		rand_input(arr, arr_size);
		break;
	default:
		return 0;
		break;
	}

	printf("%d", delete_even(arr, arr_size));
}

int choice_check()
{
	int input;
	printf("If you want to enter the elements manually print 1 or print 2 to fill the arry with random numbers\n");
	scanf_s("%d", &input);
	while (input != 1 && input != 2)
	{
		printf_s("Wrong input\n");
		scanf_s("%d", &input);
		rewind(stdin);
	}
	return input;
}

int check()
{
	int input;
	printf("Enter size of the array that is lies from 1 and 100\n");
	while (scanf_s("%d", &input) == 0 || input >= 101 || input < 0)
	{
		printf("Wrong input, please try again\n");
		rewind(stdin);
	}
	return input;
}

void elements_input_check(int arr[], int size)
{
	printf("Enter the elments of arry\n");
	for (int i = 0; i < size; i++)
	{
		while (scanf_s("%d", &arr[i]) == 0)
		{
			printf("Wrong input, please try again\n");
			scanf_s("%i", &arr[i]);
			rewind(stdin);
		}
	}
}

void rand_input(int arr[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int delete_even(int arr[], int n)
{
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		arr[x] = arr[i];
		if (arr[i] % 2 != 0)
		{
			x++;
		}
	}
	for (int i = x; i < n; i++)
	{
		arr[i] = 0;
	}
	printf("Array without even numbers ");
	for (int i = 0; i < x; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");
	return 0;
}

