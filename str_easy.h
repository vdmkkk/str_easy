#ifndef STR_EASY_H_INCLUDED
#define STR_EASY_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

string itc_hello_str(string name);
long itc_len(string str);
void itc_print_copy_str(string str, int number);
void itc_first_end_three(string str);
int itc_count_char_in_str(char cr, string str);
string itc_even_place(string str);
double itc_percent_lower_uppercase(string str);
string itc_reverse_string(string str);
string itc_slice_str(string str, int start, int ending);
bool itc_equal_reverse(string str);
int itc_find_str(string str1, string str2);
string itc_three_str(string str1, string str2, string str3);
int itc_max_char_on_end(string str);
string itc_cmp_str(string str1, string str2, int num);

#endif // STR_EASY_H_INCLUDED
