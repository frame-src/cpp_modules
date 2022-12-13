#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"
#include <iostream>

int main() {

	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point P(30, 15);
	if (bsp(a, b, c, P))
		std::cout << "Yes, it is inside" << std::endl;
	else
		std::cout << "No, it is not inside." << std::endl;
	return 0;
}