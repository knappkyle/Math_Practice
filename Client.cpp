#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
	int choice, x, y;
	Adding calculate;

	choice = calculate.OpeningMenu();

	if (choice == 1)
	{
		//function to set random number for x
		x = calculate.makeRandNum();
		//function to set random number for y
		//function to add  x + y together to get answer
		//function to display to user and type answer
		//function to MAYBE say wrong or right 
	}
	else
	{
		return 0;
	}




	system("pause");
	return 0;
}