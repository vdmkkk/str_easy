#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){
    return itc_slice_str(str1, 0, num - 1) + str2 + itc_slice_str(str1, num, itc_len(str1) - itc_len(str2) - 1);
}
