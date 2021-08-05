#include "utils.h"
#include <iostream>

void gameLoop(std::string word, std::string displayString)
{
	bool endOfGame{ false };
	int lives{ 7 };
	std::string lettersGuessed{};
	do {
		std::cout << '\t' << displayString << "\n\n";
		//std::cout << "Lives:" << lives << "\n"; // For testing purposes only

		// get the user's guess
		char userGuess{ getUserGuess() };
		//std::cout << userGuess << std::endl; // For testing purposes only

		//check if user has already guessed the letter
		if (lettersGuessed.find(userGuess) != std::string::npos)
		{
			std::cout << '\t' << userGuess << " has already been tried. Please try again!\n";
			continue;
		}
		else
			lettersGuessed += userGuess;

		// check if the user's guess is in the word
		bool letterInWord{ checkUserGuess(userGuess, word) };
		//std::cout << letterInWord << std::endl; // For testing purposes only

		// if user's guess is in the word, replace the characters in displayString with the guessed letter
		if (letterInWord)
		{
			displayString = replaceCharacters(word, displayString, userGuess);
		}
		else
		{
			std::cout << "\tI'm sorry but " << userGuess << " is not in the word.\n";
			lives--;
		}

		if (lives == 0)
		{
			std::cout << "\tI'm afraid you have lost the game.\n\n";
			endOfGame = true;
		}

		// check if game is won
		bool gameWon = checkIfGameWon(displayString);
		if (gameWon)
		{
			std::cout << "\t*** Congratulations!!! You won!!! ***\n";
			std::cout << "\tThe word was " << word << "\n\n";
			endOfGame = true;
		}

		std::cout << stage(lives) << "\n\n";
	} while (!endOfGame);
}