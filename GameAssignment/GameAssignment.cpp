// GameAssignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	int healthP1 = 100;
	int healthP2 = 100;
	bool isAliveP1 = true;
	bool isAliveP2 = true;
	bool Player1Turn = true;
	bool Player2Turn = false;
	std::string input1;
	std::string input2;
	int healP1 = 3;
	int healP2 = 3;

	std::cout << "The Battle Begins, The Heat In The Room Is Intense!!" << std::endl;

	while (isAliveP1 && isAliveP2)
	{
	
		if (Player1Turn == true)

		{
			std::cout << "Player 1 is ready to attack!!" << std::endl;
			std::cin >> input1;
			if (input1 == "attack")
			{
				healthP2 -= 20;
			}
			else if (input1 == "heal")
			{
				if (healP1 > 0)
				{
					healthP1 += 10;
					(healP1--);
					std::cout << "Player 1 has " << healP1 << " heals left." << std::endl;
				}

				if (healP1 == 0)
				{
					std::cout << "Player 1 has run out of heals." << std::endl;
				}
			}
			else if (input1 == "defend")
			{

			}
			else if (healthP1 <= 0)
			{
				isAliveP1 = false;
			}
			Player1Turn = false;
			Player2Turn = true;

			std::cout << "PLayer 1 Hp:" << healthP1 << std::endl;
			std::cout << "Player 2 Hp:" << healthP2 << std::endl;
		}
	
		if (Player2Turn == true)

		{
			std::cout << "Player 2 is ready for a counter attack!!" << std::endl;
			std::cin >> input2;
			if (input2 == "attack")
			{
				healthP1 -= 20;
			}
			else if (input2 == "heal")
				if (healP2 > 0)
				{
					healthP2 += 10;
					(healP2--);
					std::cout << "Player 2 has " << healP2 << " heals left." << std::endl;
				}

			if (healP1 == 0)
			{
				std::cout << "Player 2 has run out of heals." << std::endl;
			}
			else if (input2 == "defend")
			{

			}
			else if (healthP2 <= 0)
			{
				isAliveP2 = false;
			}
			Player2Turn = false;
			Player1Turn = true;
		}
		
		std::cout << "PLayer 1 Hp:" << healthP1 << std::endl;
		std::cout << "Player 2 Hp:" << healthP2 << std::endl;
    }

	{
		if (isAliveP1)
		{
			std::cout << "Player 1 wins!!!" << std::endl;
		}
		//testing stuff
		if (isAliveP2)
		{
			std::cout << "Player 2 wins!!!" << std::endl;
		}
	}
	system("pause");
	system("CLS");
    return 0;
}

