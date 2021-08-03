// PasswordGenerator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>

#include <string>

int main()
{
	const char letters[]{ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	const char numbers[]{ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	const char symbols[]{ '!', '#', '$', '%', '&', '(', ')', '*', '+' };

	int length_of_letters{ sizeof(letters) / sizeof(letters[0]) };
	int length_of_numbers{ sizeof(numbers) / sizeof(numbers[0]) };
	int length_of_symbols{ sizeof(symbols) / sizeof(symbols[0]) };

	srand(static_cast<int>(time(nullptr)));

	std::cout << "Welcome to the Password Generator!\n";

	std::cout << "How many letters would you like in your password? > ";
	int number_letters;
	std::cin >> number_letters;

	std::cout << "How many numbers would you like in your password? > ";
	int number_numbers;
	std::cin >> number_numbers;

	std::cout << "How many symbols would you like in your password? > ";
	int number_symbols;
	std::cin >> number_symbols;

	std::string password;
	for (int i{}; i < number_letters; i++)
	{
		int index{ rand() % length_of_letters };
		password += letters[index];
	}

	for (int i{}; i < number_numbers; i++)
	{
		int index{ rand() % length_of_numbers };
		password += numbers[index];
	}

	for (int i{}; i < number_symbols; i++)
	{
		int index{ rand() % length_of_symbols };
		password += symbols[index];
	}
	std::random_shuffle(password.begin(), password.end());
	std::cout << password;

	return 0;
}