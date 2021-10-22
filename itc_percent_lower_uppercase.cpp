#include "str_easy.h"

double itc_percent_lower_uppercase(string str){
    double lower = 0;
    double upper = 0;
    int i = 0;
    int newchar;
    while (str[i] != '\0'){
        newchar = str[i];
        if (newchar >= 65 && newchar <= 90) upper += 1;
        if (newchar >= 97 && newchar <= 122) lower += 1;
        i += 1;
    }
    return upper / lower;
}
