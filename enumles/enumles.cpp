// enumles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cardclass.h"

int main()
{
    std::cout << "Hello World!\n";
	cardclass aCard(cardclass::cardType::Heart,color::RED);
	cardclass anotherCard(cardclass::cardType::Diamond,color::RED);
	cardclass aDifferentCard(cardclass::cardType::Spade, color::BLACK);
	cardclass aBadCard(cardclass::cardType::Clover, color::RED);

	std::cout << "########################################" << std::endl;
	if (aCard.GetCardType() == cardclass::cardType::Heart && aCard.getCardColor() == color::RED) {
		std::cout << "I... aCard.... MAKE SENSE!" << std::endl;
	}
	std::cout << "########################################" << std::endl;
	if (aBadCard.GetCardType() != cardclass::cardType::Clover || aCard.getCardColor() != color::BLACK) {
		std::cout << "I... BADCARD AM HAVING A VERY VERY VERY BAD DAY" << std::endl;
	}
	std::cout << "########################################" << std::endl;
	if (aCard.GetCardType() == anotherCard.GetCardType()) {
		std::cout << "THESE ARE THE SAME CARD BAKA!" << std::endl;
	}
	else {
		std::cout << "THESE AREN'T THE SAME CARD NINCOMPOOP!" << std::endl;
	}
	std::cout << "########################################" << std::endl;
	if (aCard.getCardColor() == aDifferentCard.getCardColor())
	{
		std::cout << "we are the same color woohoo!" << std::endl;
	}
	else {
		std::cout << "we don't belong together qwq" << std::endl;
	}
	std::cout << "########################################" << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
