// Hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "utils.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << R"( _
| |
| |__   __ _ _ __   __ _ _ __ ___   __ _ _ __
| '_ \ / _` | '_ \ / _` | '_ ` _ \ / _` | '_ \
| | | | (_| | | | | (_| | | | | | | (_| | | | |
|_| |_|\__,_|_| |_|\__, |_| |_| |_|\__,_|_| |_|
                    __/ |
                   |___/    )";

	std::cout << "\n\n\t*** Welcome to Hangman ***\n\n";

	// get random word
	std::string wordToGuess{ getRandomWord() };
	// std::cout << "The word is: " << wordToGuess << std::endl; // For testing purposes only

	//set up the display string
	int wordLength = wordToGuess.length();
	std::string displayString{ setUpDisplayString(wordLength) };

	gameLoop(wordToGuess, displayString);

	return 0;
}