#include "../inc/HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string const name)
{
	this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack( void )
{
	if((this->weapon->getWeaponType()).empty())
	{
		std::cout << this->name << " attacks with their BAREHANDS " << this->weapon->getWeaponType();
		std::cout << std::endl;
	}
	else
	{
		std::cout << this->name << " attacks with their " << this->weapon->getWeaponType();
		std::cout << std::endl;
	}
}

void HumanB::setHumanWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

std::string HumanB::getHumanWeapon()
{
	return(this->weapon->getWeaponType());
}

std::string HumanB::getHumanName()
{
    return (this->name);
}
