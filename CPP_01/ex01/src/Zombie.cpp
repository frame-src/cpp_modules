#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string const name)
{
	this->name = name;
	this->known = true;
}

Zombie::Zombie()
{
	this->known = false;
}

Zombie::~Zombie()
{
	std::cout << this->name << " is †DEAD†";
	std::cout << std::endl;
}

void Zombie::announce( void )
{
	if(this->known == true)
	{
		std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
		std::cout << std::endl;
	}
}

void Zombie::setZombieName( std::string zombieName )
{
	this->name = zombieName;
	this->known = true;
}