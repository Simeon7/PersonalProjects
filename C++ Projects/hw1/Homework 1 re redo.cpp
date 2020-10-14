// Homework 1 re redo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int sum = 0, i, count=0;

	for (i = 1;sum <= 25000;i = i + 1)
	{
		sum = sum + i;
		count++;
	}

	cout << "The last number entered was " << count << endl;
	cout << "The final sum is " << sum << endl;

	system("pause");
    return 0;
}

