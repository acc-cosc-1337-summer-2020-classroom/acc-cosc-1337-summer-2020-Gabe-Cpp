#include<string>
#include<iostream>
#include "strings.h"


int main() 
{
	std::string str1 = "john";

	loop_string_w_index(str1);
	std::cout << str1;
	return 0;
}