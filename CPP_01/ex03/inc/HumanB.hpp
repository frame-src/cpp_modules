#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"
#include <string>

class HumanB
{
	private:
		std::string		name;
		Weapon			*weapon;

	public:
		HumanB (std::string name);
		HumanB ();
		~HumanB ();
	
		void attack();
		void setHumanWeapon(Weapon &weapon);
		std::string getHumanWeapon();
		std::string getHumanName();
};

#endif