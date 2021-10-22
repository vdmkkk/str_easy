#include "str_easy.h"

long itc_len(string str) {
    int i = 0;
    while (str[i] != '\0'){
        i += 1;
    }
    return i;
}
