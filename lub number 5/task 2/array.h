#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"output.h"

void memory_allocate(const int row, const int col, int*** array);
void delete_max_elements(const int row, int*** array);
void find_max_elements(const int row, const int col, int* max_elem, int*** array, const int i);
void find_length_of_the_col(const int i, int* col, int*** array);
void free_array(const int row, int*** array);