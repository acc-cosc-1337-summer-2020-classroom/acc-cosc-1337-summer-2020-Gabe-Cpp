//write include statements
#include<iostream>
#include<string>
#include<cctype>
#include "dna.h"
//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char option;
	do
		{
		string dna_input;
		cout << "Enter DNA string: ";
		do 			
			{
			cin >> dna_input;
			int length= dna_input.length();
        		for(int i= 0; i < length; i++){
        			char ltr= dna_input[i];
				}
			cout << "Wrong letter(s)! Try again. " << '\n';
			} while ((ltr != 'A') || (ltr != 'T') || (ltr != 'C')|| (ltr != 'G'));
		cout << "DNA string: " << dna_input << '\n';

		cout << "Another entry? (Y/N) ";
		cin >> option;		
		} while ((option == 'Y') || (option == 'y'));
	
	return 0;
}