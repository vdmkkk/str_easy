#include "str_easy.h"

string itc_reverse_string(string str){
    string newstring = "";
    int i = 0;
    while (str[i] != '\0'){
        newstring = str[i] + newstring;
        i += 1;
    }
    return newstring;
}
