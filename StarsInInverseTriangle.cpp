// PrintStars.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Print tam giac nguoc


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
		numStars = 2 * n - 1;
		numSpace = 0;
		for (i = numStars; i > 0; i=i-1)
		{
			for (j = i; j > 0; j = j -1)
				cout << "*";
			cout << "\n";
		}
		cout << "Press ESC to exit \n";

	} while (_getch() != 27);
}
