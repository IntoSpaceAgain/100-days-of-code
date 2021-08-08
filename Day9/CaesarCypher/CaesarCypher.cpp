// CaesarCypher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "cypher.h"
#include <iostream>
#include <string>
#include <vector>
#include <string>

int main()
{
	Cypher caesar;

	caesar.printLogo();

	bool runProgram{ true };

	do
	{
		std::string direction{};
		std::cout << "Type 'encode' to encrypt, type 'decode' to decrypt: ";
		std::cin >> std::ws >> direction;

		std::string message{};
		std::cout << "Type your message: ";
		std::getline(std::cin >> std::ws, message);

		int shift{};
		std::cout << "Type the shift number: ";
		std::cin >> shift;

		if (direction == "encode")
		{
			std::cout << "The encrypted message is: " << caesar.encrypt(message, shift) << '\n';
		}
		else if (direction == "decode")
		{
			std::cout << "The decrypted message is: " << caesar.decrypt(message, shift) << '\n';
		}

		std::cout << "Do you have any more messages to encrypt/decrypt? (yes/no): ";
		std::string continueProgram{};
		std::cin >> continueProgram;

		if (continueProgram == "no")
		{
			runProgram = false;
		}
	} while (runProgram);
	return 0;
}