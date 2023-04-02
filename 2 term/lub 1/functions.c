
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structure.h"
extern int comp;

void input_data(bunch* array, int numb)
{
	array[numb].colour = (char*)malloc(sizeof(char) * 100);
	array[numb].sort = (char*)malloc(sizeof(char) * 100);
	printf_s("input colour of flower\n");
	char line[100];
	fgets(line, 100, stdin);
	strcpy(array[numb].colour,line);
	//array[numb].sort[strlen(array[numb].sort)] = '\0';
	rewind(stdin);
	printf_s("Input sort of flower\n");
	fgets(line, 100, stdin);

	//array[numb].colour[strlen(array[numb].colour)] = '\0';
	strcpy(array[numb].sort, line);

	rewind(stdin);
	printf_s("input amount\n");
    array[numb].amount = checkinput(1, 5000);
	rewind(stdin);
}

int checkinput(int min, int max) {
	int a;
	printf_s("%s%d%s%d%s", "input number with range [", min, " : ", max, "]\n");
	while (scanf_s("%d", &a) != 1 || getchar() != '\n' || a < min || a > max) {
		printf_s("%s");
		rewind(stdin);
	}
	return a;
}

void output(bunch* array, int size) {
	if (size > 0) {
		for (int i = 0; i < size; i++) {
			printf_s("%d", i + 1, ") ");
			printf_s( "colour of flower ");
			//for (int j = 0; j < strlen(array[i].colour); j++) {
				printf_s("%s", array[i].colour);
			//}
			printf_s("sort of flower ");
			//for (int j = 0; array[i].sort[j] != '\0'; j++) {
				printf_s("%s", array[i].sort);
			//}
	
			printf_s("amount of flower %d%c", array[i].amount, '\n');
		}
	}
	else {
		printf_s("%s", "array is empty\n");
	}
}


int compare(const void* a, const void* b) {
	bunch* pa = (bunch*)a;
	bunch* pb = (bunch*)b;
	int name_cmp = 0;
	switch (comp) {
	case 1:
		if (pa->amount < pb->amount) {
			return -1;
		}
		else if (pa->amount > pb->amount) {
			return 1;
		}

		break;
	case 2:
		name_cmp = strcmp(pa->sort, pb->sort);
		if (name_cmp != 0) {
			return name_cmp;
		}
		break;
	case 3:
		name_cmp = strcmp(pa->colour, pb->colour);
		if (name_cmp != 0) {
			return name_cmp;
		}
		break;
	}
}
void colour_sort(bunch* array, int size) {
	qsort(array, size, sizeof(bunch), (int (*)(const void*, const void*)) compare);
	output(array, size);
}

void sort_flower_sort(bunch* array, int size) {
	qsort(array, size, sizeof(bunch), (int (*)(const void*, const void*)) compare);
	output(array, size);
}

void amount_sort(bunch* array, int size) {

	qsort(array, size, sizeof(bunch), (int (*)(const void*, const void*)) compare);
	output(array, size);
}

void free_array(bunch* array, int size) {
	for (int i = 0; i < size; i++) {
		free(array[i].colour);
		free(array[i].sort);
	}
	free(array);
}

int menu() {
	printf("input 0 to finish work\n");
	printf("input 1 to inicialize struct array\n");
	printf("input 2 to output array\n");
	printf("input 3 to inicialize new n element of struct\n");
	printf_s("input 4 to sort massive by amount in decreasing order \n");
	printf_s("input 5 to sort massive by sort flowers\n");
	printf_s("input 6 to sort massive by colour of flowers \n");
	return (checkinput(0, 6));
	
}

bunch* take_struct(int* kol) {
	
	rewind(stdin);
	int ans = checkinput(1, 100);
	*kol = ans;
	bunch* array = (bunch*)malloc(ans * sizeof(bunch));
	for (int i = 0; i < ans; i++) {
		input_data(array, i);
	}
	return array;
}

void free_arr(bunch* clients, int size) {
	for (int i = 0; i < size; i++) {
		free(clients[i].colour);
		free(clients[i].sort);
	}
	free(clients);
}




