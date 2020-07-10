#include<iostream>
#include<windows.h>

using namespace std;

int main() 
{
	
	//Create a handle to reference the output screen
	HANDLE screen= GetStdHandle(STD_OUTPUT_HANDLE);
	//Create a COORD structure to hold the coordinates
	COORD position;
	position.X = 30; //assign column
	position.Y = 12; //assign row
	SetConsoleCursorPosition(screen, position); //Set the screen cursor to this cell
	std::cout<<"Hello World!"<< endl;
	
	return 0;
}