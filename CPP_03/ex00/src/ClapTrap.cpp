#include "../inc/ClapTrap.hpp"



ClapTrap::ClapTrap()
{
	std::cout << "Hello hello. Default Constructor here" << std::endl;
	this->healt = 10
	this->energy = 10;
	this->attack = 0;
}

ClapTrap::ClapTrap(std::string const name)
{
	std::cout << "Hello hello. Default Constructor Name here" << std::endl;
	this->name = name;
	this->healt = 10
	this->energy = 10;
	this->attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Hello hello. Copy Constructor" << std::endl;
	this->name = other.name;
	this->healt = other.healt;
	this->energy = other.energy;
	this->attack = other.attack;
}

Con