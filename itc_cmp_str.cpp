#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num){

    long long len1 = itc_len(str1);
    long long len2 = itc_len(str2);
    string newstring = "";

    for (int i = 0; i <= num - 1; i++){
        newstring += str1[i];
    }

    newstring += itc_slice_str(str2, 0, (len1 - num));

    for (int j = num ; j < len1; j++){
        newstring += str1[j];
        }

    return itc_slice_str(newstring, 0, len1 - 1);
}
