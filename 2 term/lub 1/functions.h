#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structure.h"

void input_data(bunch* array, int numb);
int checkinput(int min, int max);
void output(bunch* array, int size);
void colour_sort(bunch* array, int size);
void sort_flower_sort(bunch* array, int size);
void amount_sort(bunch* array, int size);
void free_array(bunch* array, int size);
int menu();
bunch* take_struct(int* kol);
void free_arr(bunch* clients, int size);