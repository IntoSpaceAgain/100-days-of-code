#include <iostream>

std::string replaceCharacters(std::string word, std::string displayString, char userGuess)
{
	for (unsigned int i{}; i < word.length(); i++)
	{
		if (word[i] == userGuess)
		{
			displayString[i] = userGuess;
		}
	}
	return displayString;
}