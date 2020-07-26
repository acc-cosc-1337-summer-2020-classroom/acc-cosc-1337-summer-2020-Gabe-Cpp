#include "dyn_mem.h"
#include <iostream>

using namespace std;

int main() 
{
	int next_element= 0;
	int size= 10;
	int *p_values= new int[size];
	int val;
	cout << "please enter a number: ";
	cin >> val;
	while (val > 0) {
		if (size == next_element + 1) {
		//we pass size as a pointer since we need to
		//keep track of the size of the array as it grows!
			p_values= growArray(p_values, &size);
		}
		p_values[next_element]= val;
		next_element++;
		cout << "Current array values are: \n";
		printArray (p_values, size, next_element);
		cout << "Please enter a number (or 0 to exit): \n";
		cin >> val;		
	}
	delete []p_values;
}