#include "strings.h"
#include<iostream>
#include<string>

using std:: cout; using std:: string;

void loop_string_w_index (std::string &str) {
    string new_name{ "mary"};
    for (int i= 0; i < str.length(); ++i){
        str[i]= new_name[i];
    }

}