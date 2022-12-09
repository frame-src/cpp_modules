#ifndef FIXED_H
#define FIXED_H

#include <iostream>
/*
	A copy constructor always takes one parameter,
	reference to the type for which it belongs, 
	there maybe other parameters but they must have default values.

	The difference between the copy constructor and the assignment operator:
	1# If a new object has to be created before the copying can occur, the copy constructor is used.
	2# If a new object does not have to be created before the copying can occur, the assignment operator is used.
*/
class Fixed {

	private:
		int					fixedPoint;
		static const int	bits;
	public:
		Fixed();
		Fixed(const Fixed &other);
		~Fixed();
		Fixed &operator=(const Fixed &other);
		int getRawBits(void) const;    // returns the raw value of the fixed-point value.
		void setRawBits(int const raw);
};
#endif
/*
	int getRawBits(void) const; 
	it returns the raw value of the fixed-point value.
	But it's declare as a const function;

	void f() const makes the function itself const.
	This only really has meaning for member functions.
	Making a member function const means that it cannot call any non-const member functions, nor can it change any member variables. 
	It also means that the function can be called via a const object of the class:
*/