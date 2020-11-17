// BaiTap.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Calculate time
#include <conio.h>
#include <math.h>
#include <iostream>
using namespace std;

void inputtime(int& h, int& m, int& s, int type)
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
		int h, m, s;
		int type;
	
		cout << "If you want to calculate time 1 + time 2 please press 1 \nIf you want to calculate time 1 - time 2 please press 2\n";
		cin >> type;
		inputtime(h1, m1, s1, 1);
		inputtime(h2, m2, s2, 2);
		
	
		while (h1 > 23 || m1 > 59 || s1 > 59 || h2 > 23 || m2 > 59 || s2 > 59)
		{
			cout << "Invalid information. PLease try again \n";
			inputtime(h1, m1, s1, 1);
			inputtime(h2, m2, s2, 2);
		}
		
		if (type == 1)
		{
			h = h1 + h2;
			m = m1 + m2;
			s = s1 + s2;
			if (s >= 60)
			{
				s = s - 60;
				m = m + 1;
			}
			if (m >= 60)
			{
				m = m - 60;
				h = h + 1;
			}
			if (h >= 24)
				h = h - 24;
			cout << "The result is " << h << ":" << m << ":" << s;
		}
		else if (type == 2)
		{
			h = h1 - h2;
			m = m1 - m2;
			s = s1 - s2;
			if (h < 0)
				h = h2 - h1;
			if (m < 0)
				m = m2 - m1;
			if (s < 0)
				s = s2 - s1;

			cout << "The result is " << h << ":" << m << ":" << s;
		}
		

		cout << "\n";

		cout << "Press ESC to exit \n";
	} while (_getch() != 27);
}

