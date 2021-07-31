// BMI_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
	std::cout << "***Welcome to the BMI Calculator***\n";
	std::cout << "This program will calculate your BMI based on your height and weight.\n\n";

	std::cout << "Please enter your weight in KG: ";
	float weight{};
	std::cin >> weight;

	std::cout << "\nPlease enter your height in metres: ";
	float height{};
	std::cin >> height;

	int bmi{ int(round(weight / std::pow(height, 2))) };
	std::cout << "Your BMI is " << bmi << std::endl;

	return 0;
}