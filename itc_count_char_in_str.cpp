#include "str_easy.h"

int itc_count_char_in_str(char cr, string str){
    int i = 0;
    int counter = 0;
    while (str[i] != '\0'){
        if (str[i] == cr) counter += 1;
        i += 1;
    }
    return counter;
}
