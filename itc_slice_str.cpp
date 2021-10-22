#include "str_easy.h"

string itc_slice_str(string str, int start, int ending){
    if (ending > itc_len(str)) ending = itc_len(str) - 1;
    int i = 0;
    string newstring = "";
    while (str[i] != '\0'){
        if (i >= start && i <= ending){
            newstring += str[i];
        }
        i += 1;

    }
    return newstring;
}
