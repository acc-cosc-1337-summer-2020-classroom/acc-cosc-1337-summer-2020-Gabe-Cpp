//numberlist_vector.h
#include <iostream>
#include <fstream>
#include<string>
#include<vector>

/*
* print_vector(v)
* Prints the contents of vector v.
* v is a vector holding integers.
*/
void print_vector(const std::vector<int>& vec);

/*
save_vector(filename, v)
* Writes the contents of vector v.
* filename is name of text file created. Any file by that name is overwritten.
* v is a vector holding integers. v is unchanged by the function.
*/
void save_vector(const std::string& filename, const std::vector<int>& vec);

/*
* load_vector(filename, v)
* Reads the contents of vector v from text file filename. v's contents are replaced by the file's
* contents. If the file cannot be found, the vector v is empty.
* v is a vector holding integers.
*/
void load_vector(const std::string& filename, std::vector<int>& vec);

/*
Write function prototype for void function loop_vector_w_for_ranged_const_ref with a vector of int const pass by reference parameter.
*/


