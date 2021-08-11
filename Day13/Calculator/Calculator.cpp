// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <iterator>

void printLogo();
double add(double n1, double n2);
double subtract(double n1, double n2);
double multiply(double n1, double n2);
double divide(double n1, double n2);
void calculator();

int main()
{
	calculator();

	return 0;
}

void printLogo()
{
	std::string logo{ R"( _____________________
|  _________________  |
| |              0. | |  .----------------.  .----------------.  .----------------.  .----------------.
| |_________________| | | .--------------. || .--------------. || .--------------. || .--------------. |
|  ___ ___ ___   ___  | | |     ______   | || |      __      | || |   _____      | || |     ______   | |
| | 7 | 8 | 9 | | + | | | |   .' ___  |  | || |     /  \     | || |  |_   _|     | || |   .' ___  |  | |
| |___|___|___| |___| | | |  / .'   \_|  | || |    / /\ \    | || |    | |       | || |  / .'   \_|  | |
| | 4 | 5 | 6 | | - | | | |  | |         | || |   / ____ \   | || |    | |   _   | || |  | |         | |
| |___|___|___| |___| | | |  \ `.___.'\  | || | _/ /    \ \_ | || |   _| |__/ |  | || |  \ `.___.'\  | |
| | 1 | 2 | 3 | | x | | | |   `._____.'  | || ||____|  |____|| || |  |________|  | || |   `._____.'  | |
| |___|___|___| |___| | | |              | || |              | || |              | || |              | |
| | . | 0 | = | | / | | | '--------------' || '--------------' || '--------------' || '--------------' |
| |___|___|___| |___| |  '----------------'  '----------------'  '----------------'  '----------------'
|_____________________|)" };
	std::cout << logo << "\n\n";
}

double add(double n1, double n2)
{
	return n1 + n2;
}

double subtract(double n1, double n2)
{
	return n1 - n2;
}

double multiply(double n1, double n2)
{
	return n1 * n2;
}

double divide(double n1, double n2)
{
	return (double)n1 / n2;
}

void calculator()
{
	printLogo();
	// Create a map of functions
	std::map<char, double (*)(double, double)> operations
	{
		{'+', &add},
		{'-', &subtract},
		{'*', &multiply},
		{'/', &divide},
	};
	double num1{};
	double num2{};
	double result{};
	char continueAnswer{};

	std::cout << "What is the first number?: ";

	std::cin >> num1;

	bool continueCalculating = true;

	// Print out operations symbols
	std::cout << '\n';
	for (auto itr = operations.begin(); itr != operations.end(); itr++)
	{
		std::cout << itr->first << ' ';
	}
	std::cout << "\n\n";

	while (continueCalculating)
	{
		std::cout << "Pick an operation: ";
		char operationSymbol;
		std::cin >> operationSymbol;

		std::cout << '\n';

		std::cout << "What is the next number?: ";
		std::cin >> num2;

		// Call function from the "operations" map

		for (auto itr = operations.begin(); itr != operations.end(); itr++)
		{
			if (itr->first == operationSymbol)
			{
				result = itr->second(num1, num2);
			}
		}

		std::cout << "\n\n" << num1 << " " << operationSymbol << " " << num2 << " = " << result;
		std::cout << "\nType 'y' to continue calculating with " << result << ", or type 'n' to exit.: ";
		std::cin >> continueAnswer;

		if (continueAnswer == 'y')
		{
			num1 = result;
			continueCalculating = true;
		}
		else
		{
			system("cls");
			continueCalculating = false;
			calculator();
		}
	}
}