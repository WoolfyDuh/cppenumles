#pragma once
#include "color.h"

class cardclass
{
public:
	 enum cardType {
		Heart,
		Diamond,
		Spade,
		Clover
	};
public:
	cardclass(cardType aType, color aColor);
	~cardclass();
	cardType GetCardType();
	color getCardColor();
private:
	cardType cardtype;
	color myColor;
};

