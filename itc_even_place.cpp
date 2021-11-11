#include "str_easy.h"

string itc_even_place(string str){
    int i=0;
    string newstring = "";
    while (str[i] != '\0'){
        if (i % 2 == 1) newstring += str[i];
        i += 1;
    }
    if (itc_len(str) < 2) return "-1";
    return newstring;
}
