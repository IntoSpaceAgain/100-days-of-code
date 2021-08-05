#include <iostream>

char getUserGuess()
{
	std::cout << "Please guess a letter: ";
	char userGuess;
	std::cin >> userGuess;
	userGuess = char(std::tolower(userGuess));
	return userGuess;
}