#include<iostream>
#include<vector>
#include "vec.h"

using std::cout;

// write namespace using statement for cout, w pass by reference
// This copies the address of the actual parameter (owned by the caller) to the formal parameter v instead of
// making a copy of all the data in the caller’s vector.
void print(const std::vector<int>& v) {
    for (int elem : v)
        cout << elem << " ";
    cout << '\n';
}

int main() 
{
	std::vector<int> list {20 ,40, 60, 80};
	// Print the contents of the vector
	print(list);
	// Compute and display sum
	std::cout << sum(list) << '\n';
	// Zero out all the elements of list
	int n = list.size();
	for (int i= 0; i < n; i++)
		list[i]= 0;
	// Reprint the contents of the vector
	print(list);
	// Compute and display sum
	std::cout << sum(list) << '\n';

	return 0;
}