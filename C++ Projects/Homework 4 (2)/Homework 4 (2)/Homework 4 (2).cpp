// Homework 4 (2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
	int id, score, high, low, nid, count, total;
	float avg;

	ifstream fin;
	fin.open("quizzes.dat");
	fin >> id >> score;
	high = score;
	low = score;
	total = score;
	count = 1;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	while (!fin.eof())
	{
		fin >> nid >> score;
		
		if (id == nid)
		{
			total = total + score;
			count++;

		if(score > high)
			{
			high = score;

			}
		if (score < low)
		{
			low = score;
		}

	

		}

		if (id != nid)
		{

			total = total - (high + low);
			count = count - 2;
			avg = total / count;
			cout << id << " " << avg << endl;

			id = nid;
			total = score;
			count = 1;
			high = score;
			low = score;

		}


	}

	/*max = 100, min = 0;
	for (count = 1;count <= testnum;count++)
	{
		fin >> score;

	}*/

    return 0;
}

