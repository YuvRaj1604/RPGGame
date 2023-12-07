#include <iostream>
#include "allclass.h"
#include "hp.h"


int main() {
	warrior sage;

	std::cout << sage.HPGrowth << "- Hp Growth \n" << sage.Baseatk << " -Base attack\n" << sage.Basemana << "-Base Mana\n";
	return 0;
}