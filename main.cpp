#include <iostream>
#include <iomanip>
#include <string>
#include <time.h>
#include "Math.h"

using namespace std;

int Adding::OpeningMenu()
{
	int choice;

	cout << "===============================" << endl;
	cout << "         MATH PRACTICE         " << endl; //Maybe later add a repeat loop if 1 or 2 is not chosen.
	cout << "===============================" << endl;
	cout << "                               " << endl;
	cout << "Select an option:              " << endl;
	cout << "1: Practice" << endl;
	cout << "2: Quit" << endl;
	cout << endl;

	cin >> choice;

	return choice;
}


void Adding::setNum1(int x)
{
	RandomNumber = x;
}


void Adding::setNum2(int y)
{
	RandomNumber2 = y;
}

int Adding::getNum1()
{
	return RandomNumber;
}

int Adding::getNum2() 
{
	return RandomNumber2;
}

int Adding::makeRandNum()
{
	/* initialize random seed: */
	srand(time(NULL));

	RandomNumber = rand() % 100 + 1;

	return RandomNumber;
}