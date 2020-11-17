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
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << "j " << j;
				if (i == 0 || j == 0 || j == n - 1 || i == n - 1)
					cout << "*";
				else cout << " ";
			}
			cout << "\n";
		}
		cout << "Press ESC to exit";

	} while (_getch() != 27);
}
