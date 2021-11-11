#include "str_easy.h"

long long itc_find_str(string str1, string str2){
    long long res = -1;
    for (int i = 0; i < itc_len(str1); i++){
        if (itc_slice_str(str1, i, i + itc_len(str2) - 1) == str2){
            res = i;
            break;
        }
    }
    return res;
}
