#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string		type;

	public:
		Weapon ();
		Weapon (std::string type);
		~Weapon ();

		std::string	&getWeaponType(void);
		void 		setWeaponType(std::string type);
};

#endif