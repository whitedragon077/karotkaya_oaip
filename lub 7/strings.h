#pragma once
#include <stdlib.h>

int string_find_k_word(char** string, int k);
int string_is_letter(char** string);
int string_end_k_word(char** string, int start);
void string_reverse(char** string, int start, int end);
void string_insert(char** first_string, char** second_string, char char_);