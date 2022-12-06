#include "../inc/HumanA.hpp"


/*
	This is because references must refer to something and therefore cannot be default constructed.
	Once you are in the constructor body, all your data members have been initialized.
			this->weapon = weapon; 
	line would really be an assignment, assigning the value referred to by weapon to whatever this->weapon refers to.
*/
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack( void )
{
	if(this->weapon.getWeaponType() == "")
	{
		std::cout << this->name << " attacks with their BAREHANDS " << this->weapon.getWeaponType();
		std::cout << std::endl;
	}
	else
	{
		std::cout << this->name << " attacks with their " << this->weapon.getWeaponType();
		std::cout << std::endl;
	}
}

void HumanA::setHumanWeapon(Weapon &weapon)
{
	this->weapon = weapon;
}

std::string HumanA::getHumanWeapon()
{
	return(this->weapon.getWeaponType());
}

std::string HumanA::getHumanName()
{
    return (this->name);
}
