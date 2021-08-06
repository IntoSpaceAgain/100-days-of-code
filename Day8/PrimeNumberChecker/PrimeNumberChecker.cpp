// PrimeNumberChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
bool primeCheck(long long number);
long long getUserInput();

int main()
{
	std::cout << "*** Welcome to the Prime Number Checker ***\n";
	std::cout << "This program will check a given number to see if it is prime or not.\n\n";

	long long number{ getUserInput() };

	if (primeCheck(number))
	{
		std::cout << number << " is prime.\n";
	}
	else
	{
		std::cout << number << " is not prime.\n";
	}

	return 0;
}

bool primeCheck(long long number)
{
	bool isPrime{ true };

	for (long long i{ 2 }; i < number; i++)
	{
		if (number % i == 0)
		{
			isPrime = false;
		}
	}

	return isPrime;
}

long long getUserInput()
{
	std::cout << "Please enter the number you wish to check: ";
	long long numberToCheck;
	std::cin >> numberToCheck;
	return numberToCheck;
}