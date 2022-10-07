#include<stdio.h>
#include<stdlib.h>

void elements_input_check(int arr[], int size);
void rand_input(int arr[], int size);
int check();
int max_element(int arr[], int size);
int multiply(int arr[], int size); 
int choice_check();

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
	printf("Max element is %d\n", max_element(arr, arr_size));
	printf("%d", multiply(arr, arr_size));

}

int choice_check()
{
	int input;
	printf("If you want to enter the elements manually print 1 or print 2 to fill the arry with random numbers\n");
	scanf_s("%d", &input);
	while (input != 1 && input != 2)
	{
		printf_s("Wrong input, please try again\n");
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

int max_element(int arr[], int size)
{
	int max_elem = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max_elem < arr[i])
		{
			max_elem = arr[i];
		}
	}
	return max_elem;
}

int multiply(int arr[], int size)
{
	int multi = 1, first_zero = 0, second_zero = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			first_zero = i;
			break;
		}
	}
	for (int i = first_zero + 1; i < size; i++)
	{
		if (arr[i] == 0)
		{
			second_zero = i;
			break;
		}
	}
	if (second_zero != 0 && second_zero != ++first_zero)
	{
		for (; first_zero < second_zero; first_zero++)
		{
			multi *= arr[first_zero];
		}
		printf_s("Muliplication between 2 zero numbers is ");
		return multi;
	}
	else
	{
		printf_s("There are no 2 zero elements\n");
		return 0;
	}
}