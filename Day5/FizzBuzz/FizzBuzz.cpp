// FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Your program should print each number from 1 to 100 in turn.

// When the number is divisible by 3 then instead of printing the number it should print "Fizz".
// When the number is divisible by 5 then instead of printing the number it should print "Buzz".

#include <iostream>

int main()
{
	for (int i{ 1 }; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << "FizzBuzz\n";
		}
		else if (i % 3 == 0)
		{
			std::cout << "Fizz\n";
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz\n";
		}
		else
		{
			std::cout << i << std::endl;
		}
	}
	return 0;
}