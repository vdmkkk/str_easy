#include "str_easy.h"

string itc_even_place(string str){
    int i=0;
    string newstring = "";
    while (str[i] != '\0'){
        if (i % 2 == 0) newstring += str[i];
        i += 1;
    }
    return newstring;
}
