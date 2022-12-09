#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
	private:
		static const int	bits;
		int					fixedPoint;

	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed(const int integerNumber);
		Fixed(const float floatNumber);
		~Fixed();
		Fixed &operator=(const Fixed &other);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
};

std::ostream &operator<< (std::ostream &out, const Fixed &other);

#endif