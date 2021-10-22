#include "str_easy.h"

int itc_max_char_on_end(string str){
    int i = 0;
    char cr = '!';
    int counter = 0;
    int maxx = 0;
    while (str[i] != '\0') {
        if (str[i] != cr && str[i] > 47 && str[i] < 58){
            if (counter > maxx) maxx = counter;
            cr = str[i];
            counter = 0;
        } if (str[i] == cr) counter += 1;
        i += 1;
    }
    return maxx;
}
