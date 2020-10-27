// Homework 3 (2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<fstream>
#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	int account, code, wcount=0, dcount=0;
	float amount, balance, finalbal, damount=0, wamount=0;

	ifstream fin;
	fin.open("bank.dat");
	fin >> account >> code >> amount >> balance;

	fin.setf(ios::fixed);
	fin.setf(ios::showpoint);
	fin.precision(2);


	while (!fin.eof())
	{
		if (code == 1)
		{
			finalbal = amount + balance;
			dcount++;
			damount = damount + amount;
		}

		else if (code == 2)
		{
			if (amount > balance)
			{
				cout << "Insufficient funds. Cannot withdraw." << endl;

			}
			else
			{
				wcount++;
				finalbal = balance - amount;
				wamount = wamount + amount;
			}

			if (balance<=100)
			{ 
			
				finalbal = finalbal - (amount-10);
			
			}
		}
		else
		{
			cout << "code invalid" << endl;
		}


		cout << account << setw (10) << code << setw (10) << amount << setw (10) << balance << setw(10) << finalbal << endl;
		fin >> account >> code >> amount >> balance;
	}
	
	cout << endl
		<< "Successful deposites $" << damount << endl
		<< "Successful withdrawls $" << wamount << endl;

    return 0;
}

