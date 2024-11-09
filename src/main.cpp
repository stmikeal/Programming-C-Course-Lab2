#include <iostream>
#include <list>
#include <vector>

#include "TextualRepresentation.hpp"

void static_test()
{
	TextualRepresentation first(1, "First");
	TextualRepresentation *second = new TextualRepresentation(2, "Second");
	first.print();
	second->print();
	delete second;
}

void vector_test() {
	std::vector<TextualRepresentation> vector;
	vector.push_back(TextualRepresentation(1, "First vector element"));
	vector.push_back(TextualRepresentation(2, "Second vector element"));
	vector.push_back(TextualRepresentation(3, "Third vector element"));
	for (auto &item : vector)
		item.print();
}

void list_test() {
	std::list<TextualRepresentation> list;
	list.push_back(TextualRepresentation(1, "First list element"));
	list.push_back(TextualRepresentation(2, "Second list element"));
	list.push_back(TextualRepresentation(3, "Third list element"));
	for (auto &item : list)
		item.print();
}

int main()
{
	std::cout << "--- STATIC TEST START ---" << std::endl;
	static_test();
	std::cout << "--- STATIC TEST END -----" << std::endl;

	std::cout << "--- VECTOR TEST START ---" << std::endl;
	vector_test();
	std::cout << "--- VECTOR TEST END -----" << std::endl;

	std::cout << "--- LIST TEST START -----" << std::endl;
	list_test();
	std::cout << "--- LIST TEST END -------" << std::endl;

	return 0;
}