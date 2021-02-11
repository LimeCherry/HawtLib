#pragma once
#include <iostream>

#include "Table.h"

namespace HawtLib {

	namespace HawtTables {
		struct Card {
			Table* parentT;
			std::string text;
			char Bcap;

			explicit Card(Table* parent, const std::string& text, char Bcap = '|');

			void Print();
		};
	}
}
