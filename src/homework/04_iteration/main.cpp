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
int main() {
	char option;
	string dna_input;
	double gc_content;
	string dna_complement;	
    do{
		cout << "Enter DNA string: "<< '\n';
		cin >> dna_input;
		cout << "DNA string: " << dna_input << '\n';
		char test;
		cout << "MENU"<< '\n';
		cout << "Enter 1: Get GC Content "<< '\n';
		cout << "Enter 2: Get DNA Complement "<< '\n';
		cin >> test;
		switch (test){
			case '1':
				gc_content= get_gc_content(dna_input);
				cout << "GC Content= " << gc_content << '\n';
				break;
			case '2':
				dna_complement= get_dna_complement(dna_input);
				cout << "DNA Complement= " << dna_complement << '\n';
		}

		cout << "Another entry? (Y/N) ";
		cin >> option;		
	} while ((option == 'Y') || (option == 'y'));
	
	return 0;
}