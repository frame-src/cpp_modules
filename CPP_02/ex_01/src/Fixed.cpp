#include "../inc/fixed.hpp"
#include <cmath>

const int	Fixed::bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::Fixed(const int integerNumber)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = integerNumber << this->bits;
	//convert the integer into a point;
}

Fixed::Fixed(const float floatingNumber)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = round(floatingNumber) << this->bits;
	//convert the float into a fixed point;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = other.getRawBits();
}

Fixed &operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->fixedPoint = other.getRawBits();
	return (*this)
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

