#include <stdio.h>
#include <stdlib.h>
#include"input.h"
#include"memory.h"
#include"sort.h"
#include"output.h"

int main(int argc, char** argv)
{
    char** string;
    memory_allocate(argc, &string);
    for (int i = 1; i < argc; i++) 
    {
        input_string(argv[i], &string[i]);
    }
    insert_sort(&string, argc);
    printf("\nSorted array of strings in ascending order\n");
    output_string(string, argc);
    free(string);

}