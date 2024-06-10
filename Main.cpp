/************************************************************************************************
	Name: CoachLDEW
	Date: 06.10.2024
	Purpose: This is a program that places the cursor at the specified point on the console 
			 screen
*************************************************************************************************/


#include <iostream>			//This library contains standard input and output processes
#include <Windows.h>		//This library contains the function to control the cursor position

using namespace std;

void GoToXY(int x, int y)
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);		//Get the ID of the console window

	COORD coord;								//Variable of type COORD that holds the X and Y position
	coord.X = x;
	coord.Y = y;

	//Takes two parameters.  The ID of the console window and Structure of the type COORD which are the coordinates where
	//we want to position the cursor.	
	SetConsoleCursorPosition(hCon, coord);
}



int main()
{
	GoToXY(15, 15);
	cout << "The cursor has moved." << endl;

	return 0;
}