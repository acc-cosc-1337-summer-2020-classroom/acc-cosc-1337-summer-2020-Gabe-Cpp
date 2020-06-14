#include "vars.h"
#include <iostream>
#include <ctime>

using std:: cout; using std:: cin; using namespace std;
int main() 
{
	unsigned seed = time(0);
	srand(seed);
	int max = 200;
	int num;
	num = rand() %max + 1;
	cout << num << endl;
	return 0;
}