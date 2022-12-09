#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

Point::Point() {
	Fixed const x(0);
	Fixed const y(0);
}

Point::Point(Fixed const &x, Fixed const &y) : x(x), y(y) {
}

Point::Point(const Point &other) : x(other.x), y(other.y){
}

Point &Point::operator=(const Point &other) {
	(void)other;
	std::cerr << "const cannot be modified" << std::endl;
	return (*this);
}

Point::~Point(){
}

Fixed Point::getX() const {
	return x;
}

Fixed Point::getY() const {
	return y;
}


