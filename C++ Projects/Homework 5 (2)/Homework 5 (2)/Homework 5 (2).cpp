// Homework 5 (2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<fstream>
using namespace std;

void line(char ch, int num)

{
	

	for (int i = 0;i < num;i++)

		cout << ch;
	
	cout << endl;

}

void rectangle(char ch, int x, int y)
{
	for (int i = 0;i < x;i++)
	
		line(ch, y);
		
	cout << endl;
}

int main()
{
	int count=0, place;
	char ch;
	ifstream fin;
	fin.open("animals.dat");
	fin.get(ch);

	while (!fin.eof())
	{
		if (ch != '\n')
		{

			place = ch - 64;
			count++;

			rectangle(ch, count, place);
		
		}

		else if (ch == '\n')
		{
			count = 0;
			cout << endl;
			cout << endl;

		}

		fin.get(ch);
	}
    return 0;
}

