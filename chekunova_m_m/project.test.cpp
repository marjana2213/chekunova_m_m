#include "project.hpp"

#include <iostream>

int main() {
	Rdec2D a{ 3, 4 };
	Rdec2D b{ 10, 25 };
	
	Rpol2D c{ 3, 4 };
	Rpol2D d{ 10, 25 };

	auto z = a + b;
	auto z2 = c + d;
	std::cout << z << std::endl;
	std::cout << z2 << std::endl;
}
