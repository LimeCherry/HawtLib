#include <iostream>

#include "Card.h"
#include "../HawtText/TextFormatting.h"

namespace HawtLib {

	namespace HawtTables {
		Card::Card(Table* parent, const std::string& text, TxtAlignment txtAlignment, char Bcap)
			: parentT(parent), text(text), txtAlignment(txtAlignment), Bcap(Bcap) {}

		void SetTxtAlinment() {

		}

		void Card::Print() {
			
			if (txtAlignment == TxtAlignment::Left) {
				printf("%c%s%s", Bcap, text.c_str(), std::string(parentT->_GetExtraSpaces(text.size()), ' ').c_str());
			}
			else if (txtAlignment == TxtAlignment::Center) {
				printf("%c%s%s", Bcap,
					HawtText::CenterText(text, parentT->GetBiggestCardLenght()).c_str(), "");
			}
			else {	// Right
				printf("%c%s%s", Bcap,
					HawtText::RightText(text, parentT->GetBiggestCardLenght()).c_str(), "");
			}
		}
	}
}

