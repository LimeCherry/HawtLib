#include <iostream>

#include "Card.h"
#include "../HawtText/TextFormatting.h"

namespace HawtLib {

	namespace HawtTables {
		Card::Card(Table* parent, const std::string& text, char Bcap) : parentT(parent), text(text), Bcap(Bcap) {}

		void Card::Print() {
			
			if (parentT->m_TxtAlignment == TxtAlignment::Left) {
				printf("%c%s%s", Bcap, text.c_str(), std::string(parentT->_GetExtraSpaces(text.size()), ' ').c_str());
			}
			else if (parentT->m_TxtAlignment == TxtAlignment::Center) {
				printf("%c%s%s", Bcap, text.c_str(),
					HawtText::CenterText(std::string(parentT->_GetExtraSpaces(text.size()), ' ')).c_str());
			}
			else {	// Right
				printf("%c%s%s", Bcap, text.c_str(),
					HawtText::RightText(std::string(parentT->_GetExtraSpaces(text.size()), ' ')).c_str());
			}
		}

	}
}

