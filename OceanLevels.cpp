// OceanLevels.cpp : The purpose is to calculate how much the variable rises each amount of time
//

#include <iostream>
using namespace std;

int main()
{//First program is showing first variable
	double Num1 = 1.5;

	cout << "Type a number as the current level: ";
	cin >> Num1;
	//Next program will multiply the first variable with the following numbers of 5, 7, and 10
	//Then subracting the first variable after the multiplication which will give us our results
	cout << "\n The Number of Millimeters higher than the current level after 5 years " << (float)Num1 * 5 - Num1;
	cout << "\n The Number of Millimeters higher than the current level after 7 years " << (float)Num1 * 7 - Num1;
	cout << "\n The Number of Millimeters higher than the current level after 10 years " << (float)Num1 * 10 - Num1;
}



