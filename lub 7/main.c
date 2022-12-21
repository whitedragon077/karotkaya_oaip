#include <stdio.h>
#include "input.h"
#include"strings.h"
#include "task1.h"
#include "task2.h"

	int main()
	{
		int (*task)(void) = NULL;
		int choice;
		printf("Choose the task you want to execute:\n1) Task 1\n2) Task 2\n3) Quit\n");
		input_choice(&choice);
		switch (choice) {
		case 1:
			task = task1;
			task();
			break;
		case 2:
			task = task2;
			task();
			break;
		case 3:
			return 0;
			break;
		}
		return 0;
	}
