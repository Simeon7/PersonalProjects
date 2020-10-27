// Test4(Redo).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int count_down;
	cout << "How many greetings do you want? ";
	cin >> count_down;

	while (count_down > 0)
	{
		cout << "hello ";
		count_down = count_down - 1;
	}
	cout << endl;
	cout << "That is all!\n";


    return 0;
}

