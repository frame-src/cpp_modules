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
		Fixed(const float floatingNumber);
		Fixed 		&operator=(const Fixed &other);
		~Fixed();

		/*			unary operator increment	*/
		Fixed		operator++();
		Fixed		operator++(int);
		Fixed		operator--();
		Fixed		operator--(int);

		/*			binary operator increment	*/
		bool		operator<(Fixed const &other) const;
		bool		operator>(Fixed const &other) const;
		bool		operator<=(Fixed const &other) const;
		bool		operator>=(Fixed const &other) const;
		bool		operator==(Fixed const &other) const;

		/*			algebric operator			*/
		Fixed		operator+(Fixed const &other);
		Fixed		operator-(Fixed const &other);
		Fixed		operator*(Fixed const &other);
		Fixed		operator/(Fixed const &other);


		/*			static min/max				*/
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);


		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
};

std::ostream &operator<< (std::ostream &out, const Fixed &other);
#endif