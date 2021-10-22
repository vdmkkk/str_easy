#include "str_easy.h"

void itc_first_end_three(string str){
    if (itc_len(str) > 5){
        cout << str[0] << str[1] << str[2] << str[itc_len(str) - 3] << str[itc_len(str) - 2] << str[itc_len(str) - 1];
    } else {
        for (int i=0; i < itc_len(str); i++) cout << str[0];
    }
}
