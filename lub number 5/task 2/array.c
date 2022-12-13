#include "array.h"

void memory_allocate(const int row, const int col, int*** array)
{
    *array = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++)
    {
        (*array)[i] = (int*)calloc(col, sizeof(int));
    }
}

void delete_max_elements(const int row, int*** array)
{
    for (int i = 0; i < row; i++)
    {
        int col = 0, max_elem = (*array)[i][0];
        find_length_of_the_col(i, &col, array);
        find_max_elements(row, col, &max_elem, array, i);
        for (int j = 0; j < col; j++)
        {
            if ((*array)[i][j] == max_elem)
            {
                col--;
                for (int k = j; k < col; k++)
                {
                    (*array)[i][k] = (*array)[i][k + 1];
                }
                j--;
                (*array)[i] = (int*)realloc((*array)[i], col * sizeof(int));
            }
        }
    }
}

void find_max_elements(const int row, const int col, int* max_elem, int*** array, const int i)
{
    for (int j = 0; j < col; j++)
    {
        if ((*array)[i][j] > (*max_elem))
        {
            (*max_elem) = (*array)[i][j];
        }
    }
}

void find_length_of_the_col(const int i, int* col, int*** array)
{
    int j = 0;
    while ((*array)[i][j])
    {
        (*col)++;
        j++;
    }
    (*col)++;
}

void free_array(const int row, int*** array)
{
    for (int j = 0; j < row; j++)
    {
        free(*(array + j));
    }
    free(array);

}