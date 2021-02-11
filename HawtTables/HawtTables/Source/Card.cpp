#include "Card.h"

namespace HawtLib {

	namespace HawtTables {
		Card::Card(Table* parent, const std::string& text, char Bcap) : parentT(parent), text(text), Bcap(Bcap) {}

		void Card::Print() {
			//std::string x = parentT->GetExtraSpaces(text.size());
			//printf("%s", x.c_str());
			printf("%c%s%s", Bcap, text.c_str(), std::string(parentT->_GetExtraSpaces(text.size()), ' ').c_str());
		}

	}
}

