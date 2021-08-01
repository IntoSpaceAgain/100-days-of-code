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

	// Determine BMI status

	std::string bmi_status{};

	if (bmi < 18.5)
	{
		bmi_status = " underweight.";
	}
	else if (bmi >= 18.5 && bmi < 25)
	{
		bmi_status = " a normal weight.";
	}
	else if (bmi >= 25 && bmi < 30)
	{
		bmi_status = " slightly overweight.";
	}
	else if (bmi >= 30 && bmi < 35)
	{
		bmi_status = " obese.";
	}
	else if (bmi >= 35)
	{
		bmi_status = " clinically obese.";
	}

	std::cout << "Your BMI is " << bmi << ". You are" << bmi_status << std::endl;

	return 0;
}