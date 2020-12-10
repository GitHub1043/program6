// program6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand (time(0));							// Initialize the system clock

	int num = 1;

	cout << "The numbers are: ";

	// Generate the number
	for (int i = 0; i < 10; i++){
		num = rand() % 10 + 1;					// Generate numbers from 1 to 10

	// Output the number
	cout << num << " ";							// Print numbers in a line
	}

	cout << endl;

	return 0;
}

