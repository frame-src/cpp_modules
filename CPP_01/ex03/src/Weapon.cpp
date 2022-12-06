#include "../inc/Weapon.hpp"

Weapon::Weapon ()
{
}

Weapon::Weapon (std::string type)
{
	this->type = type;
}

Weapon::~Weapon ()
{
}

std::string	&Weapon::getWeaponType(void)
{
	return (this->type);
}

void Weapon::setWeaponType(std::string type)
{
	this->type = type;
}