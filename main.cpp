#include <iostream>
#include <iomanip>
#include <string>
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