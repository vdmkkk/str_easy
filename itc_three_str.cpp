#include "str_easy.h"

string itc_three_str(string str1, string str2, string str3){
    int i = 0;
    int start = itc_find_str(str1, str2);
    while (str1[i] != '\0'){
        start = itc_find_str(str1, str2);
        if (start == -1) i += 1;
        else {
        str1 = itc_slice_str(str1, 0, start - 1) + str3 + itc_slice_str(str1, start + itc_len(str2), itc_len(str1));
        i = start + itc_len(str2);
        }
    }
    return str1;
}
