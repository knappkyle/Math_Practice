#include <iostream>
#include "Math.h"

using namespace std;

int main()
{
	int choice, x, y, sum, answer;
	bool Notsolved = true;
	char again;
	Adding calculate;

	choice = calculate.OpeningMenu();

	if ((choice == 1) || (again == 'y'))
	{
		//function to set random number for x
		x = calculate.makeRandNum();
		//function to set random number for y
		y = calculate.makeRandNum2();
		//function to add  x + y together to get answer
		sum = calculate.addSum(x, y);
		//function to display to user and type answer
		answer = calculate.DispExp(x, y);
		//right or wrong
		while (Notsolved)
		{
				if (sum == answer)
				{
					Notsolved = false;
					cout << "CORRECT!" << endl;
					cout << "===============================" << endl;
				}
				else
				answer = calculate.DispExp(x, y);
		}
	}
	cout << endl;
	cout << "Play again? (y/n): ";
	cin >> again;

	if (again == 'y')
	{
		system("CLS");
		main();

	}
	else
		return 0;

	system("pause");
	return 0;
}