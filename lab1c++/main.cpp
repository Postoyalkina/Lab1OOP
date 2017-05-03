// lab1c++.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "circle.h"
#include <conio.h>
#include <iostream>

using namespace std;

int const n = 5;
circle circ[5];

void Menu()
{
	cout << " 1 : Create and fill circle array \n";
	cout << " 2 : Print a circle \n";
	cout << " 3 : Resize \n";
	cout << " 4 : Calculate circuit of a circle \n";
	cout << " 5 : Calculate area of a circle \n";
	cout << " 0 : Exit \n";
}

void Initialize()
{
	for (int i = 0; i < n; i++)
	{
		cout << "Radius: ";
		cin >> circ[i].rad;
		cout << endl;
	}
}

void Print()
{
	int i;
	cout << "Print circle number ";
	cin >> i;
	i = i - 1;
	cout << "Radius: " << circ[i].rad << "\n";
}

int main()
{
	int num;
	double cir, area, proc;
	do
	{
		Menu();
		cout << "Enter\n";
		cin >> (num);
		int k = 0;
		switch (num)
		{
		case 1:
			Initialize();
			break;
		case 2:
			Print();
			break;
		case 3:
			cout << "Change circle number ";
			cin >> k;
			k = k - 1;
			cout << "Enter procent ";
			cin >> proc;
			circ[k].changeSize(proc);
			break;
		case 4:
			cout << "Calculate circuit of circle number ";
			cin >> k;
			k = k - 1;
			cir = circ[k].Circuit();
			cout << "Circuit of " << k + 1 << " circle is: " << cir << endl;
			break;
		case 5:
			cout << "Calculate area of circle number ";
			cin >> k;
			k = k - 1;
			area = circ[k].Area();
			cout << "Area of " << k + 1 << " circle is: " << area << endl;
			break;
		}
	}
	while (num != 0);
	system("pause");
    return 0;
}

