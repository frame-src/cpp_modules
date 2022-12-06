#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;

	public:
		HumanA (std::string name, Weapon &weapon);
		HumanA ();
		~HumanA ();

		void attack();
		void setHumanWeapon(Weapon &weapon);
		std::string getHumanWeapon(void);
		std::string getHumanName(void);
};

#endif