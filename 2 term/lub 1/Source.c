
#include "structure.h"
#include "functions.h"

int comp = 0;
int main() {

	int size = 0;
	bunch* array = NULL;
	while (1) {
		int v = menu();
		if (v == 0)break;
		if (v == 1) {
			array = take_struct(&size);
		}
		if (v == 2) {
			output(array, size);
		}
		if (v == 3) {
			if (size > 0) {
				printf_s("input number of element, which you want to rewrite\n");
				input_data(array, checkinput(1, size) - 1);
			}
			else {
				printf_s("massive of structs is empty\n");
			}
		}
		if (v == 4) {
			comp = 1;
			amount_sort(array, size);

		}
		if (v == 5) {
			comp = 2;
			sort_flower_sort(array, size);

		}
		if (v == 6) {
			comp = 3;
			colour_sort(array, size);
		}
	}
	free_arr(array, size);
	return 0;
}



