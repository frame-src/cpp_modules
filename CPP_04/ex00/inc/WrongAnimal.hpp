
#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& ref);
		WrongAnimal& operator=(const WrongAnimal& ref);
		~WrongAnimal();

		std::string getType() const;
		virtual void makeSound() const;
};

#endif