#include "../inc/HumanB.hpp"

HumanB::HumanB()
{
	this->equipped = false;
}

HumanB::HumanB(std::string const name)
{
	this->name = name;
	this->equipped = false;
}

HumanB::~HumanB()
{
}

void HumanB::attack( void )
{
	if(this->equipped == false || !this->weapon)
	{
		std::cout << this->name << " attacks with their BAREHANDS ";
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
	this->equipped = true;
}

std::string HumanB::getHumanWeapon()
{
	return(this->weapon->getWeaponType());
}

std::string HumanB::getHumanName()
{
    return (this->name);
}
