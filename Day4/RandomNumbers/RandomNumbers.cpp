// RandomNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
// From https://www.learncpp.com

//#include <iostream>
//#include <cstdlib> // for std::rand() and std::srand()
//#include <ctime> // std::time()
//
//int main()
//{
//	std::srand(static_cast<unsigned int>(std::time(nullptr))); // Set initial seed value to system clock
//
//	// Print 100 random numbers
//	for (int count{ 1 }; count <= 100; ++count)
//	{
//		std::cout << std::rand() << '\t';
//
//		// If we've printed 5 numbers, start a new row.
//		if (count % 5 == 0)
//		{
//			std::cout << '\n';
//		}
//	}
//
//	// Roll a die
//
//	int min{ 1 }, max{ 6 };
//	static constexpr double fraction{ 1.0 / (RAND_MAX + 1.0) }; // static used for efficiency, so we only calculate this value once
//	// evenly distribute the random number across our range
//	int die_roll{ min + static_cast<int>((max - min + 1) * (std::rand() * fraction)) };
//
//	std::cout << die_roll << '\n';
//
//	return 0;
//}

// Random numbers using Mersenne Twister
#include <iostream>
#include <random> // for std::mt19937
#include <ctime> // for std::time

int main()
{
	// Initialize our mersenne twister with a random seed based on the clock
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };

	// Create a reusable random number generator that generates uniform numbers between 1 and 6
	std::uniform_int_distribution die{ 1, 6 };

	// Print a bunch of random numbers
	for (int count{ 1 }; count <= 48; ++count)
	{
		std::cout << die(mersenne) << '\t';

		// If we've printed 6 numbers, start a new row
		if (count % 6 == 0)
			std::cout << '\n';
	}
}