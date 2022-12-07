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
		Fixed(const float floatingNumber)
		Fixed ~Fixed();
		Fixed &operator=(const Fixed &other);
		
		/*member functions*/
		int		getRawBits(void) const;
		void	setRawBits(int const rawBits)
		float	toFloat(void) const;
		int		toInt(void) const;
};

#endif