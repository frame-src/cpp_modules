#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& ref);
		WrongCat& operator=(const WrongCat& ref);
		virtual ~WrongCat();

		virtual void makeSound() const;
};

#endif