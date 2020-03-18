#include "cardclass.h"

cardclass::cardclass(cardType aType, color aColor)
	:cardtype(aType), 
	myColor(aColor)
{
}

cardclass::~cardclass()
{
}

 cardclass::cardType cardclass::GetCardType()
{
	 return cardtype;
}

 color cardclass::getCardColor()
 {
	 return myColor;
 }
