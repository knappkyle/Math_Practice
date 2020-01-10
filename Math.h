#pragma once

#ifndef MATH_H
#define MATH_H

#include <string>
#include <iostream>


class Adding 
{
private:

	int RandomNumber;
	int RandomNumber2;

public:

	int OpeningMenu();
	int makeRandNum();
	int makeRandNum2();
	int addSum(int, int);
	int DispExp(int, int);

	//setters
	void setNum1(int);
	void setNum2(int);

	//getters
	int getNum1();
	int getNum2();


};
#endif