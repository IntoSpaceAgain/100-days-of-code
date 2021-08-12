// Blackjack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iterator>

void playGame();
void printLogo();
int dealCard();
int calculateScore(std::vector<int>& vCards);
std::string compare(int userScore, int computerScore);

int main()

{
	// set random seed to clock
	srand(static_cast<int>(time(nullptr)));
	playGame();

	return 0;
}

void playGame()
{
	printLogo();

	std::vector<int> userCards{};
	std::vector<int> computerCards{};

	bool gameOver{ false };

	// Deal 2 cards each
	for (int i{ 0 }; i < 2; i++)
	{
		userCards.push_back(dealCard());
		computerCards.push_back(dealCard());
	}
	// get the hand score
	int userScore{ calculateScore(userCards) };
	int computerScore{ calculateScore(computerCards) };

	while (!gameOver) {
		std::cout << "Your cards: [";
		std::copy(userCards.begin(), userCards.end(), std::ostream_iterator<int>(std::cout, " "));
		std::cout << "], current Score : " << userScore << '\n';
		std::cout << "Computer's first card: " << computerCards[0] << "\n\n";

		// if either player has blackjack or the user's score is over 21 the game is over
		if (userScore == 0 || computerScore == 0 || userScore > 21)
		{
			gameOver = true;
		}
		else
		{
			std::cout << "Type 'y' to get another card, type 'n' to pass: ";
			char userDeal{};
			std::cin >> userDeal;
			if (userDeal == 'y')
			{
				userCards.push_back(dealCard());
				userScore = calculateScore(userCards);
			}
			else
			{
				gameOver = true;
			}
		}
	}
	while (computerScore != 0 && computerScore < 17)
	{
		computerCards.push_back(dealCard());
		computerScore = calculateScore(computerCards);
	}

	std::cout << "Your final hand was: [";
	std::copy(userCards.begin(), userCards.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << "], final Score : " << userScore << '\n';

	std::cout << "The Computer's final hand was: [";
	std::copy(computerCards.begin(), computerCards.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << "], final Score : " << computerScore << '\n';
	std::cout << compare(userScore, computerScore);

	char playAgain{};
	std::cout << "\n\nDo you want to play again?: ";
	std::cin >> playAgain;

	if (playAgain == 'y')
	{
		system("cls");
		playGame();
	}
}

void printLogo()
{
	std::string logo{ R"(.------.            _     _            _    _            _
|A_  _ |.          | |   | |          | |  (_)          | |
|( \/ ).-----.     | |__ | | __ _  ___| | ___  __ _  ___| | __
| \  /|K /\  |     | '_ \| |/ _` |/ __| |/ / |/ _` |/ __| |/ /
|  \/ | /  \ |     | |_) | | (_| | (__|   <| | (_| | (__|   <
`-----| \  / |     |_.__/|_|\__,_|\___|_|\_\ |\__,_|\___|_|\_\\
      |  \/ K|                            _/ |
      `------'                           |__/           )" };
	std::cout << logo << "\n\n";
}

int dealCard()
{
	std::vector<int> cards{ 11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };

	// setup rng to produce uniform numbers from 0 to cards.size() - 1
	int randIndex{ rand() % (int)cards.size() };

	return cards[randIndex];
}

int calculateScore(std::vector<int>& vCards)
{
	// returns the score from a vector of cards
	int score{};
	for (auto& n : vCards)
	{
		score += n;
	}

	// if the hand has 2 cards and the score is 21 return 0
	if (vCards.size() == 2 && score == 21)
	{
		return 0;
	}

	// if the score is over 21 and the hand has an ace, count the ace as 1 instead of 11
	for (auto& n : vCards)
	{
		if (n == 11 && score > 21)
		{
			n = 1;
			score = calculateScore(vCards);
		}
	}

	return score;
}

std::string compare(int userScore, int computerScore)
{
	if (userScore == computerScore)
	{
		return "Draw!\n";
	}
	else if (computerScore == 0)
	{
		return "The computer has BlackJack. You lose!\n";
	}
	else if (userScore == 0)
	{
		return "BlackJack! You win!\n";
	}
	else if (computerScore > 21)
	{
		return "The computer bust! You win!\n";
	}
	else if (userScore > 21)
	{
		return "You bust! The computer wins!\n";
	}
	else if (userScore > computerScore)
	{
		return "You win!\n";
	}
	else
	{
		return "The computer wins!\n";
	}
}