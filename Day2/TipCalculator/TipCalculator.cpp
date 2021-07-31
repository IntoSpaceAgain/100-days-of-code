// TipCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "en_US.UTF-8");

	std::wcout << "*** Welcome to the Tip Calculator ***\n";
	std::wcout << "This program will calculate how much each diner needs to pay towards the bill given the number of diners and the tip percentage.\n\n";

	std::wcout << "Enter the cost of the meal: £";
	float meal_cost{};
	std::cin >> meal_cost;

	std::wcout << "\nWhat percentage of the bill would you like to tip? ";
	int tip_percentage{};
	std::cin >> tip_percentage;

	float tip_cost{ meal_cost * tip_percentage / 100 };
	float bill_total{ meal_cost + tip_cost };
	std::wcout << std::fixed << std::setprecision(2);

	std::wcout << "\nCost of the meal: £" << meal_cost;
	std::wcout << "\nCost of the tip: £" << tip_cost;
	std::wcout << "\nFinal total: £" << bill_total;

	std::wcout << "\n\nHow many people are dining? ";
	int number_diners;
	std::cin >> number_diners;

	float cost_per_diner{ bill_total / number_diners };
	std::wcout << "\nEach person should pay £" << cost_per_diner << std::endl;

	return 0;
}