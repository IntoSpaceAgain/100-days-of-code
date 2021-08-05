#include <iostream>

bool checkUserGuess(char letter, std::string word)
{
	for (char character : word)
	{
		if (letter == character)
		{
			return true;
		}
	}
	return false;
}