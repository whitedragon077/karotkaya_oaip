#pragma once
#include<stdio.h>
#include<stdlib.h>


void memory_allocate(const int row, const int col, int*** array);
void delete_elements(int* row, const int col, int*** array);
void find_cols_with_2_zero(const int i, const int col, int*** array, int* zero_counter);
void free_array(const int row, int** array);