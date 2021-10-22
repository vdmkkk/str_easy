#include "str_easy.h"

int itc_find_str(string str1, string str2){
    int i1 = 0;
    int i2;
    int res = -1;
    bool started = false;
    bool in = false;
    while (str1[i1] != '\0'){
        if (str1[i1] == str2[0] && !started){
            started = true;
            i2 = 0;
            res = i1;
        }
        if (started) {
            if (i2 == itc_len(str2) - 1) return res;
            if (str2[i2] != str1[i1]) started = false;
            i2 += 1;
        }
        i1 += 1;
    }
    return -1;
}
