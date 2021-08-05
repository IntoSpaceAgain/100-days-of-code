#include <iostream>

std::string stage(int numberOfLives)
{
	std::string stages[]{
		R"(  +---+
  |   |
  O   |
 /|\  |
 / \  |
      |
=========)",
	R"(  +---+
  |   |
  O   |
 /|\  |
 /    |
      |
=========)",
	R"(  +---+
  |   |
  O   |
 /|\  |
      |
      |
=========)",
	R"(  +---+
  |   |
  O   |
 /|   |
      |
      |
=========')",
	R"(  +---+
  |   |
  O   |
  |   |
      |
      |
=========)",
R"(  +---+
  |   |
  O   |
      |
      |
      |
=========)",
	R"(  +---+
  |   |
      |
      |
      |
      |
=========)",
	"" };
	return stages[numberOfLives];
}