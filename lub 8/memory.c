#include "memory.h"

void memory_allocate(int argc, char*** string)
{
    (*string) = (char**)calloc(argc, 255);
    for (int i = 0; i < argc; i++) {

        (*string)[i] = (char*)calloc(1, 256);
    }
}