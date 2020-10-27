// Test1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int number_of_pods, peas_per_pod, total_peas;
	cout << "Press return after entering a number. \n";
	cout << "Enter the number of pods: \n";
	cin >> number_of_pods;
	cout << "Enter the number of peas in a pod ";
	cin >> peas_per_pod;
	total_peas = number_of_pods*peas_per_pod;
	cout << "If you have ";
	cout << number_of_pods;
	cout << " Pea Pods \n";
	cout << "and ";
	cout << peas_per_pod;
	cout << " Peas in each pod, then \n";
	cout << "you have ";
	cout << total_peas;
	cout << " Peas in all the pods. \n";
    return 0;
}

