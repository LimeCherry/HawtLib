#include "../Source/Table.h"
#include "../Source/Card.h"

using namespace HawtLib::HawtTables;

void Demo() {
	Table table;				// Init Table obj
	table.AddRows(3);			// Set number of rows to three
	table.AddCard("Car Name", 0).AddCard("Color", 0).AddCard("Door Count", 0);	// Header
	table.AddCard("Dodge Demon", 1).AddCard("Red", 1).AddCard("two", 1);		// Enrtry 1
	table.AddCard("Nissan Versa", 2).AddCard("Grey", 2).AddCard("two", 2);		// Entry 2
	table.PrintTable();			// Print Table
	std::cin.get();
}