// PrintStars.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Print tam giac can


#include <iostream>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
	do {
		int n; // n is height
		int numStars;
		int numSpace;
		int i, j;
		cout << "Input the height ";
		cin >> n;
		numStars = 1;
		numSpace = n-1;
		for (i = 0; i < n; i++)
		{
			numStars = 2 * i + 1;
			
			for (j = 0; j < numSpace; j++) cout << " ";
			for (j = 0; j < numStars; j++) cout << "*";
			numSpace = numSpace - 1;


			
			cout << "\n";
		}
		cout << "Press ESC to exit \n";

	} while (_getch() != 27);
}
