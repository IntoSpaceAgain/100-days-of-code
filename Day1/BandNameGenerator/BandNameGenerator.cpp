// BandNameGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	std::cout << "Weclome to the Band Name Generator!" << std::endl;
	std::cout << "This program will take two inputs and combine them to provide a potential name for a band." << std::endl;

	std::string city_name;
	std::cout << "What city did you grow up in? " << std::flush;
	std::cin >> city_name;

	std::string pet_name;
	std::cout << "What is the name of your pet? " << std::flush;
	std::cin >> pet_name;

	std::string band_name = city_name + " " + pet_name;
	std::cout << "\n\nA possible name for your band is " << band_name << std::endl;

	return 0;
}