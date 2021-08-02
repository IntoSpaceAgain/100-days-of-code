// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::string rock{ R"(    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___))" };

	std::string paper{ R"(    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________))" };

	std::string scissors{ R"(    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___))" };

	// Set random seed to the system clock
	srand(static_cast<int>(time(nullptr)));

	std::string options[]{ "Rock", "Paper", "Scissors" };
	std::string symbols[]{ rock, paper, scissors };

	int maxRand{ sizeof(options) / sizeof(options[0]) };

	std::cout << "*** Welcome to Rock, Paper, Scissors ***\n";
	std::cout << "Please enter your choice: 0-Rock, 1-Paper, 2-Scissors: ";
	int player_choice;
	std::cin >> player_choice;

	int computer_choice{ rand() % maxRand };

	std::cout << "You chose: \n" << symbols[player_choice] << std::endl;
	std::cout << "\nThe computer chose: \n" << symbols[computer_choice] << std::endl;

	if (player_choice == computer_choice)
		std::cout << "\n\nIt's a draw!!" << std::endl;
	else if (player_choice == 0 && computer_choice == 2 || player_choice == 1 && computer_choice == 0 || player_choice == 2 && computer_choice == 1)
		std::cout << "\n\nYou win!!" << std::endl;
	else
		std::cout << "\n\nYou lose!!" << std::endl;
	return 0;
}