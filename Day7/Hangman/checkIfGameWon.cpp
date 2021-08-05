#include <iostream>

bool checkIfGameWon(std::string displayString)
{
	for (unsigned int i{}; i < displayString.length(); i++)
	{
		if (displayString[i] == '_')
			return false;
	}
	return true;
}