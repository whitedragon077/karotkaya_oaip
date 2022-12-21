#include "str.h"

int str_min_len_word(char* string, int len_of_string) {
	int len_of_string_with_min_word = 0;
	int min_word = INT_MAX;
	while (len_of_string_with_min_word < len_of_string) {
		int len_of_min_word = 0;
		while (len_of_string_with_min_word < len_of_string && (string)[len_of_string_with_min_word] != ' ') {
			len_of_string_with_min_word++;
			len_of_min_word++;
		}
		len_of_string_with_min_word++;
		if (len_of_min_word < min_word) {
			min_word = len_of_min_word;
		}
	}
	return min_word;
}