// BaiTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;

void inputtime(int &h, int &m, int &s, int type)
{
	cout << "Input h" << type << " ";
	cin >> h;
	cout << "Input m" << type << " ";
	cin >> m;
	cout << "Input s" << type << " ";
	cin >> s;
}
int main()
{
	do
	{
		int h1, m1, s1;
		int h2, m2, s2;
		inputtime(h1, m1, s1, 1);
		inputtime(h2, m2, s2, 2);
		while (h1 > 23 || m1 > 59 || s1 > 59 || h2 > 23 || m2 > 59 || s2 > 59)
		{
			cout << "Invalid information. PLease try again \n";
			inputtime(h1, m1, s1, 1);
			inputtime(h2, m2, s2, 2);
		}
			if (h1 > h2)
				cout << h1 << ":" << m1 << ":" << s1 << ">" << h2 << ":" << m2 << ":" << s2;
			else if (h2 > h1)
				cout << h1 << ":" << m1 << ":" << s1 << "<" << h2 << ":" << m2 << ":" << s2;
			else
			{
				if (m1 > m2)
					cout << h1 << ":" << m1 << ":" << s1 << ">" << h2 << ":" << m2 << ":" << s2;
				else if (m2 > m1)
					cout << h1 << ":" << m1 << ":" << s1 << "<" << h2 << ":" << m2 << ":" << s2;
				else
					if (s1 > s2)
						cout << h1 << ":" << m1 << ":" << s1 << ">" << h2 << ":" << m2 << ":" << s2;
					else if (s2 > s1)
						cout << h1 << ":" << m1 << ":" << s1 << "<" << h2 << ":" << m2 << ":" << s2;
					else
						cout << h1 << ":" << m1 << ":" << s1 << "=" << h2 << ":" << m2 << ":" << s2;
			}
			cout << "\n";

		cout << "Press ESC to exit \n";
	} while (_getch() != 27);
}

