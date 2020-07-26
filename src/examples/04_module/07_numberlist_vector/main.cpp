#include "numberlist_vector.h"
#include<string>
#include<iostream>


int main() {
	std::cout << "It creates a vector where the .exe is located.\n";
	std::cout << "An integer at a time can be added to the vector.\n";
	std::vector<int> list;
	bool done = false;
	char command;
	while (!done) {		
		std::cout << "I)nsert <item> P)rint "
				  << "S)ave <filename> L)oad <filename> "
		          << "E)rase Q)uit: ";
		std::cin >> command;
		int value;
		std::string filename;
		switch (command) {
			case 'I':
			case 'i':
			std::cin >> value;
			list.push_back(value);
			break;
			case 'P':
			case 'p':
			print_vector(list);
			break;
			case 'S':
			case 's':
			std::cin >> filename;
			save_vector(filename, list);
			break;
			case 'L':
			case 'l':
			std::cin >> filename;
			load_vector(filename, list);
			break;
			case 'E':
			case 'e':
			list.clear();
			break;
			case 'Q':
			case 'q':
			done = true;
			break;
		}
	}
}