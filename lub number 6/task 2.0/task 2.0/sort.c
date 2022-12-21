#include "sort.h"

void merge_sort(int*** array, int rows, int cols)
{

    int mid = rows / 2;
    if (rows % 2 == 1)
    {
        mid++;
    }
    int count = 1;
    int** array_merge = NULL;
    allocate_memory(rows, cols, &array_merge);
    int step;


    while (count < cols)
    {
        step = count;
        int i = 0;
        int j = mid;
        int k = 0;
        int sum_first = 0, sum_second = 0;
        while (step <= mid)
        {
            while ((i < step) && (j < cols) && (j < (mid + step)))
            {
                for (int p = 0; p < rows; p++)
                {
                    if ((*array)[p][i] % 2 == 0) sum_first += (*array)[p][i];
                    if ((*array)[p][j] % 2 == 0) sum_second += (*array)[p][j];
                }
                if (sum_first < sum_second)
                {
                    for (int p = 0; p < cols; p++) {
                        array_merge[p][k] = (*array)[p][i];
                    }
                    i++; k++;
                }
                else {
                    for (int p = 0; p < rows; p++) {
                        array_merge[p][k] = (*array)[p][j];
                    }
                    j++; k++;
                }
            }
            while (i < step)
            {
                for (int p = 0; p < rows; p++) {
                    array_merge[p][k] = (*array)[p][i];
                }
                i++; k++;
            }
            while ((j < (mid + step)) && (j < cols))
            {
                for (int p = 0; p < rows; p++) {
                    array_merge[p][k] = (*array)[p][j];
                }
                j++; k++;
            }
            step += count;
        }
        count *= 2;

        for (i = 0; i < cols; i++)
            for (int p = 0; p < rows; p++)
                (*array)[p][i] = array_merge[p][i];
    }
}