// PaintAreaCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

double wallArea(double height, double width);
int numberOfPaintTins(double area, double coverage);
double getUserInput(std::string message);

int main()
{
	std::cout << "*** Welcome to the Paint Area Calculator. ***" << std::endl;
	std::cout << "This program will calculate the number of tins required to paint a wall with a given area.\n\n";

	int paintTinCoverage = 5;
	double areaToPaint = wallArea(getUserInput("Enter the wall's height in metres: "), getUserInput("Enter the wall's width in metres: "));
	std::cout << "Area to paint: " << areaToPaint << " metres.\n";
	int numberofTins = numberOfPaintTins(areaToPaint, paintTinCoverage);
	std::cout << "Tins of paint required: " << numberofTins << std::endl;

	return 0;
}

double wallArea(double height, double width)
{
	return height * width;
}

int numberOfPaintTins(double area, double coverage)
{
	return round(area / coverage);
}

double getUserInput(std::string message)
{
	std::cout << message;
	double input;
	std::cin >> input;
	return input;
}