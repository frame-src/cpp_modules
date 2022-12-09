#include "../inc/Fixed.hpp"
#include <cmath>

const int	Fixed::bits = 8;

Fixed::Fixed() {
	this->fixedPoint = 0;
}

//return (fixed_point_t)(input * (1 << FIXED_POINT_FRACTIONAL_BITS));
//convert the integer into a point;
Fixed::Fixed(const int integerNumber) {
	this->fixedPoint = integerNumber << this->bits;
}

//convert the float into a fixed point;
Fixed::Fixed(const float floatingNumber) {
	this->fixedPoint = roundf(floatingNumber * (1 << this->bits));
}

Fixed::Fixed(const Fixed &other) {
	this->fixedPoint = other.getRawBits();
}

Fixed::~Fixed() {
}


/*			MEMBER FUNCTION			*/

Fixed &Fixed::operator=(const Fixed &other) {
	this->fixedPoint = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const {
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->fixedPoint = raw;
}

float	Fixed::toFloat(void) const {
	float converted = (float)(this->fixedPoint) / (float)(1 << this->bits);
	return (converted);
}

int		Fixed::toInt(void) const {
	int16_t converted = this->fixedPoint >> this->bits;
	return converted;
}
/*			std::ostream Overload			 */
std::ostream &operator<< (std::ostream &out, const Fixed &other) {
	out << other.toFloat();
	return (out);
}

/*			>, <, >=, <=, and == Overload					*/
bool	Fixed::operator<(Fixed const &other) const {
	return(this->fixedPoint < other.fixedPoint);
}

bool	Fixed::operator>(Fixed const &other) const {
	return(this->fixedPoint > other.fixedPoint);
}

bool	Fixed::operator<=(Fixed const &other) const {
	return(this->fixedPoint <= other.fixedPoint);
}

bool	Fixed::operator>=(Fixed const &other) const {
	return(this->fixedPoint >= other.fixedPoint);
}

bool	Fixed::operator==(Fixed const &other) const {
	return(this->fixedPoint == other.fixedPoint);
}
/*			+, -, *, and / Overload		*/
Fixed Fixed::operator+(Fixed const &other) {
	Fixed tmp(*this);
	tmp.setRawBits(this->getRawBits() + other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator-(Fixed const &other) {
	Fixed tmp(*this);
	tmp.setRawBits(this->getRawBits() - other.getRawBits());
	return (tmp);
}

Fixed Fixed::operator*(Fixed const &other) {
	Fixed tmp(*this);
	tmp.setRawBits((this->getRawBits() * other.getRawBits())/(1 << this->bits));
	return (tmp);
}

Fixed Fixed::operator/(Fixed const &other) {
	Fixed tmp(*this);
	tmp.setRawBits((this->getRawBits() * (1 << this->bits))/ other.getRawBits());
	return (tmp);
}

/*			4 increment/decrement
			++a							*/
Fixed Fixed::operator++() {
	this->fixedPoint++;
	return (*this);
}
/*			a++							*/
Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

/*			--a							*/
Fixed Fixed::operator--() {
	this->fixedPoint--;
	return (*this);
}
/*			a--							*/
Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

/*			min and max
			min							*/
Fixed &Fixed::min(Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const &min(Fixed const &a, Fixed const &b) {
	return (Fixed::min(a, b));
}
/*			max							*/
Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const &max(Fixed const &a, Fixed const &b) {
	return (Fixed::max(a, b));
}