// TreasureIsland.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ascii art from https://ascii.co.uk/art

#include <iostream>

int main()
{
	// Ascii Art
	std::string treasure{ R"(*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/[TomekK]
*******************************************************************************)" };

	std::string ferry{ R"(             /|~~~
           ///|
         /////|
       ///////|
     /////////|
   \==========|===/
~~~~~~~~~~~~~~~~~~~~~
unknown)" };

	std::string sign{ R"(      _____________________________________
     |                                     |
     |  _|  _.   _       _    _        _   |
     | |_| | |  |_| |_| .-|  `-. | |_| _|_ |
     |          |     '  ~    ~  +   |  |  |
     |_____________________________________|
)" };

	std::string fire{ R"(From: cv666@cleveland.Freenet.Edu (Gary G. Nass)
                                   GOD
              *      .            dZZZZZ,       .          *
                                 dZZZZ  ZZ,
     *         .         ,AZZZZZZZZZZZ  `ZZ,_          *
                    ,ZZZZZZV'      ZZZZ   `Z,`\
                  ,ZZZ    ZZ   .    ZZZZ   `V
        *      ZZZZV'     ZZ         ZZZZ    \_              .
.              V   l   .   ZZ        ZZZZZZ          .
               l    \       ZZ,     ZZZ  ZZZZZZ,
   .          /            ZZ l    ZZZ    ZZZ `Z,
                          ZZ  l   ZZZ     Z Z, `Z,            *
                .        ZZ      ZZZ      Z  Z, `l
                         Z        ZZ      V  `Z   \
                         V        ZZC     l   V
           Z             l        V ZR        l      .
            \             \       l  ZA
                            \         C          C
                                  \   K   /    /             K
                          A    \   \  |  /  /              /
                           \        \\|/ /  /
   __________________________________\|/_________________________)" };

	std::string bear{ R"(  .:::.      _,,,_      .:::.
 ::(\:::.-'"`     `"'-.:::/):;
 `:::\:`               `:/:::'
   `::                   ::'
    /  .:::.       .:::.  \
    |  ::::0}     {0::::  |
    |  ::::/       \::::  |
    |   ''/         \''   |
    |    /           \    |
     \   ; . .---. . ;   /
      `. \'.(     ).'/ .'
   jgs  `-\. `-.-' '/-'
           \'--'--'/
            `-...-')" };

	std::string disappointment{ R"(     _ _                             _       _                        _
    | (_)                           (_)     | |                      | |
  __| |_ ___  __ _ _ __  _ __   ___  _ _ __ | |_ _ __ ___   ___ _ __ | |_
 / _` | / __|/ _` | '_ \| '_ \ / _ \| | '_ \| __| '_ ` _ \ / _ \ '_ \| __|
| (_| | \__ \ (_| | |_) | |_) | (_) | | | | | |_| | | | | |  __/ | | | |_
 \__,_|_|___/\__,_| .__/| .__/ \___/|_|_| |_|\__|_| |_| |_|\___|_| |_|\__|
                  | |   | |
                  |_|   |_|                                               )" };

	std::string fish{ R"(                 |
                 |
                ,|.
               ,\|/.
             ,' .V. `.
            / .     . \
           /_`       '_\
          ,' .:     ;, `.
          |@)|  . .  |(@|
     ,-._ `._';  .  :`_,' _,-.
    '--  `-\ /,-===-.\ /-'  --`
   (----  _|  ||___||  |_  ----)
    `._,-'  \  `-.-'  /  `-._,'
             `-.___,-' ap)" };

	std::string death{ R"(                      ,____
                      |---.\
              ___     |    `
             / .-\  ./=)
            |  |"|_/\/|
            ;  |-;| /_|
           / \_| |/ \ |
          /      \/\( |
          |   /  |` ) |
          /   \ _/    |
         /--._/  \    |
         `/|)    |    /
           /     |   |
         .'      |   |
  jgs   /         \  |
       (_.-.__.__./  /)" };

	// Game code
	std::cout << treasure << '\n';

	std::cout << "\tWelcome to Treasure Island.\n";
	std::cout << "Your mission is to find the treasure.\n\n";

	std::cout << "As you leave town at the start of your treasure hunt, you find yourself at a junction. You may go left or right.\n";
	std::cout << "Enter your choice:> ";
	std::string choice;
	std::cin >> choice;

	if (choice == "l" || choice == "left")
	{
		// You go left
		std::cout << sign << '\n';
		std::cout << "\nTurning to your left, you stride down the path with determination.\n";
		std::cout << "After several hours of walking along the wooded path, you approach a swift flowing river.\n";
		std::cout << "A sign informs you that a ferry will be along within the hour. Alternatively, you may attempt to swim across the river.\n";
		std::cout << "Enter your choice:> ";
		std::cin >> choice;

		if (choice == "wait")
		{
			// You catch the ferry
			std::cout << ferry << '\n';
			std::cout << "\nThe ferry carries you safely across the river and deposits you on the far shore.\n";
			std::cout << "You walk for another hour or so, until you are confronted with a high tower.\n";
			std::cout << "In the base of the tower are three doors: one blue, one red and one yellow.\n";
			std::cout << "You may choose one door (red / blue / yellow):> ";
			std::cin >> choice;

			if (choice == "red")
			{
				// Killed by fire
				std::cout << fire << '\n';

				std::cout << "As soon as you open the door, you are hit by a bolt of magical lightning, which obliterates you.\n";
				std::cout << "Your have died. Game over. \n\n";
			}
			else if (choice == "blue")
			{
				// Killed by a bear
				std::cout << bear << '\n';
				std::cout << "No sooner have you opened the door than you are set upon by a huge brown bear.\n";
				std::cout << "It mauls you and the last thing you see is its mouth closing over your head!\n";
				std::cout << "You have died. Game over.\n\n";
			}
			else if (choice == "yellow")
			{
				// Found the treasure
				std::cout << treasure << "\n\n";
				std::cout << "You open the door and step into the room beyond. In front of you are riches beyond your wildest dreams.\n";
				std::cout << "You return to your home in the knowledge that you will never want for anything ever again.\n";
				std::cout << "*******************************************************************************\nCONGRATULATIONS!!!\tYou have successfully completed your mission!\n*******************************************************************************";
			}
			else
			{
				// You didn't make a recognised decision
				std::cout << disappointment << '\n';
				std::cout << "Unable to make a decision, you realise that you must return home empty handed.\n";
				std::cout << "Your mission is a failure and your game is over.\n\n";
			}
		}
		else
		{
			// Killed by a giant trout
			std::cout << fish << '\n';
			std::cout << "You dive into the waters and appear to be making good headway against the current.\n";
			std::cout << "Unfortunately, unseen by you, a giant trout has been stalking you.\n";
			std::cout << "You have died. Game over.\n\n";
		}
	}
	else
	{
		// Killed in a spike pit
		std::cout << death << '\n';
		std::cout << "\nAs you step onto the path ahead, you fail to spot the spike pit that prematurely ends your adventure.\n";
		std::cout << "You have died. Game over.\n\n";
	}

	return 0;
}