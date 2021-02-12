#pragma once
#include <vector>
#include <string>

namespace HawtLib {

	namespace HawtTables {
		struct Card;

		enum class TxtAlignment {
			Left, Center, Right
		};

		class Table {
		private:
			struct Row {
				std::vector<Card*> Cards;

				void Print();

				~Row();
			};

			TxtAlignment m_TxtAlignment;

		private:
			std::vector<Row*> m_Rows;
			char m_Ecap;	// character to add at the end of a row
			unsigned int m_BiggestCardLength;
			Table* m_This = this;

		private:
			int _GetExtraSpaces(unsigned int letterCount);
			void _AddDivider(size_t rowIdx) const;
			void _EndRow(unsigned int rowIdx) const;
		public:

			friend struct Card;

			Table(char Ecap = '|', TxtAlignment txtAlignment = TxtAlignment::Left);

			void AddRows(unsigned int rows);

			void PrintTable() const;

			Table& AddCard(const std::string& text, unsigned int rowIdx, char bCap = '|');

			unsigned int GetBiggestCardLenght() const;

			~Table();
		};

	}
}

