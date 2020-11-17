// PrintStars.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Print tam giac


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
		for (i = 0; i < numStars; i++)
		{
			for (j = 0; j < i; j++)
				cout << "*";
			cout << "\n";
		}
		cout << "Press ESC to exit";

	} while (_getch() != 27);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
