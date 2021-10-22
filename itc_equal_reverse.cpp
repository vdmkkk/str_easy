#include "str_easy.h"

bool itc_equal_reverse(string str){
    if (itc_reverse_string(str) == str) return true;
    return false;
}
