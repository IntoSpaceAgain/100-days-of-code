// GuessTheNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random> // for std::mt19937
#include <ctime> // for std::time

int getTurns();
int userGuess();

int main()
{
	// Initialize our mersenne twister with a random seed based on the clock
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

	// Welcome the user
	std::cout << "*** Welcome to the Number Guessing Game! ***\n\n";
	std::cout << "I'm thinking of a number between 1 and 100.\n";

	// Get random number between 1 and 100
	std::uniform_int_distribution randomNumber{ 1, 100 };
	int numberToGuess{ randomNumber(mersenne) };

	// Get difficulty - 10 moves on easy, 5 moves on hard
	int numberOfTurns{ getTurns() };

	bool userWon{ false };

	while (numberOfTurns > 0 && userWon == false) {
		std::cout << "You have " << numberOfTurns << " attempts remaining to guess the number.\n";

		// Have the user make a guess
		int userNumber = userGuess();

		// Check the user's guess against the number: too high / too low
		if (userNumber == numberToGuess)
		{
			std::cout << "You got it! The number was " << numberToGuess << '\n';
			std::cout << "Congratulations!!\n";
			userWon = true;
		}
		else if (userNumber < numberToGuess)
		{
			std::cout << "To low.\n";
			userWon = false;
		}
		else
		{
			std::cout << "Too high.\n";
			userWon = false;
		}

		numberOfTurns--;
		if (!userWon && numberOfTurns > 0)
		{
			std::cout << "Guess again.\n";
		}
		else
		{
			std::cout << "Game over. \n";
		}
	}
	return 0;
}

int getTurns()
{
	std::cout << "Choose a difficulty. Type 'easy' or 'hard': ";
	std::string difficulty;
	std::cin >> difficulty;

	if (difficulty == "hard")
	{
		return 5;
	}
	else
	{
		return 10;
	}
}

int userGuess() {
	std::cout << "Make a guess: ";
	int userNumber;
	std::cin >> userNumber;

	return userNumber;
}