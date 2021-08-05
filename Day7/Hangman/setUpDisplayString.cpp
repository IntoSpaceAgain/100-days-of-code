#include <iostream>

std::string setUpDisplayString(int wordLength)
{
	std::string display{};

	for (int i{}; i < wordLength; i++)
	{
		display += '_';
	}

	return display;
}