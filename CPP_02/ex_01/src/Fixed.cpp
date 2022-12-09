#include "../inc/Fixed.hpp"
#include <cmath>

const int	Fixed::bits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

//return (fixed_point_t)(input * (1 << FIXED_POINT_FRACTIONAL_BITS));
//convert the integer into a point;
Fixed::Fixed(const int integerNumber)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPoint = integerNumber << this->bits;
}

//convert the float into a fixed point;
Fixed::Fixed(const float floatNumber)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPoint = roundf(floatNumber * (1 << this->bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPoint = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called " << std::endl;
	this->fixedPoint = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPoint = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

float	Fixed::toFloat(void) const
{
	std::cout << "toFloat called" << std::endl;
	float converted = (float)(this->fixedPoint) / (float)(1 << this->bits);
	return (converted);
}

int		Fixed::toInt(void) const
{
	std::cout << "toInt called" << std::endl;
	int16_t converted = this->fixedPoint >> this->bits;
	return (converted);
}

std::ostream &operator<< (std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return (out);
}