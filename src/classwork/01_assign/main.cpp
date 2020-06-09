//Write the include statement for types.h here

//Write include for capturing input from keyboard and displaying output to screen
#include<iostream>
#include "types.h"
using std:: cout; using std::cin;
int main()
{
	auto num = 0;
	cout<<"Enter number: ";
	cin>>num;

	int result = multiply_numbers(num);

	cout<<"Result is: "<<result<<"\n";

	auto num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result is: "<<result;
	return 0;
}