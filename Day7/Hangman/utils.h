#ifndef UTILS_H
#define UTILS_H

#include <iostream>

std::string getRandomWord();
bool checkUserGuess(char letter, std::string word);
char getUserGuess();
std::string setUpDisplayString(int wordLength);
std::string replaceCharacters(std::string word, std::string displayString, char userGuess);
bool checkIfGameWon(std::string displayString);
std::string stage(int numberOfLives);
void gameLoop(std::string word, std::string displayString);

#endif
