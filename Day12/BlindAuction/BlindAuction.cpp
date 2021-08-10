// BlindAuction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
#include <string>

void showTitle();
std::string getName();
double getBid();
bool otherBids();

int main()
{
	showTitle();
	// Setup map
	std::map<std::string, double> auctionBids{};

	//Auction loop
	bool bidding{ true };
	while (bidding == true)
	{
		std::string name = getName();
		double bid = getBid();

		auctionBids[name] = bid;

		if (otherBids())
		{
			system("cls"); // clear the console.
			bidding = true;
			showTitle();
			continue; // start loop over for next bidder.
		}

		bidding = false;
	}

	// Get winning bid
	double currentMax{ 0 };
	std::string arg_max{ "" };
	for (auto it = auctionBids.begin(); it != auctionBids.end(); ++it)
	{
		if (it->second > currentMax)
		{
			arg_max = it->first;
			currentMax = it->second;
		}
	}

	system("cls");
	std::cout << "The winning bidder was " << arg_max;
	std::wcout << " with a winning bid of £" << currentMax;
	std::cout << std::endl;

	return 0;
}

void showTitle()
{
	// Show logo artwork
	std::string logoArt{ R"(
                         ___________
                         \         /
                          )_______(
                          |'''''''|_.-._,.---------.,_.-._
                          |       | | |               | | ''-.
                          |       |_| |_             _| |_..-'
                          |_______| '-' `'---------'` '-'
                          )'''''''(
                         /_________\\
                       .-------------.
                      /_______________\\)" };

	std::cout << logoArt << "\n\n";
	std::cout << "*** Welcome to the blind auction. ***\n\n";
}

std::string getName()
{
	std::string biddersName{};
	std::cout << "Please enter your name: ";
	std::cin >> biddersName;
	return biddersName;
}

double getBid()
{
	setlocale(LC_ALL, "en_US.UTF-8");
	double bid{};
	std::wcout << "Please enter your bid: £";
	std::cin >> bid;
	return bid;
}

bool otherBids()
{
	std::cout << "Are there other bidders? (yes/no): ";
	std::string more;
	std::cin >> more;

	if (more == "y" || more == "yes" || more == "Y" || more == "Yes")
		return true;
	else
		return false;
}