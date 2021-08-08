#include "Cypher.h"
#include <iostream>
#include <vector>

int Cypher::getIndex(std::vector<char> v, char K)
{
	auto it = std::find(v.begin(), v.end(), K);
	if (it != v.end())
	{
		int index = it - v.begin();
		return index;
	}
	else
	{
		return -1;
	}
}

std::string Cypher::encrypt(std::string message, int shift)
{
	std::string encryptedMessage{ "" };
	for (char element : message)
	{
		int mIndex = getIndex(Cypher::alphabet, element);
		shift = shift % alphabet.size();

		unsigned int shiftedIndex = mIndex + shift;
		if (shiftedIndex > alphabet.size() - 1)
			shiftedIndex -= alphabet.size();
		encryptedMessage += alphabet[shiftedIndex];
	}

	return encryptedMessage;
}

std::string Cypher::decrypt(std::string message, int shift)
{
	std::string decryptedMessage{ "" };
	for (char element : message)
	{
		int mIndex = getIndex(Cypher::alphabet, element);
		shift = shift % alphabet.size();

		int shiftedIndex = mIndex - shift;
		if (shiftedIndex < 0)
			shiftedIndex += alphabet.size();
		decryptedMessage += alphabet[shiftedIndex];
	}

	return decryptedMessage;
}

void Cypher::printLogo()
{
	std::cout << logo << "\n\n";
}