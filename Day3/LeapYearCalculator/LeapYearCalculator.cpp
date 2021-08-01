// LeapYearCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// Leap Years occur every 4 years, except on century years (e.g 1800), when they only occur if the year is divisible by 400.
	// So while 2000 was a leap year, 1900 was not as it is not divisible by 400.

	std::cout << "*** Welcome to the Leap Year Calculator ***\n";
	std::cout << "This program will check if a year that you enter is a leap year or not.\n\n";

	std::cout << "Please enter the year you would like to check: >";
	int year;
	std::cin >> year;

	if (year % 4 == 0)
	{
		// Divisible by 4 - Is it a century year?
		if (year % 100 == 0) {
			// Century year
			if (year % 400 == 0)
			{
				// Century year and divisible by 400 - Leap Year
				std::cout << "\nThe year " << year << " is a leap year.\n";
			}
			else
			{
				// Century year not divisible by 400 - Not a Leap Year
				std::cout << "\nThe year " << year << " is not a leap year.\n";
			}
		}
		else
		{
			// Divisible by 4 and not a century year - Leap Year
			std::cout << "\nThe year " << year << " is a leap year.\n";
		}
	}
	else
	{
		// Not divisible by 4 - Not a Leap Year
		std::cout << "\nThe year " << year << " is not a leap year.\n";
	}

	return 0;
}