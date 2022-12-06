#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string const name)
{
	this->name = name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->name << " is †DEAD†";
	std::cout << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}

void Zombie::setZombieName( std::string zombieName )
{
	this->name = zombieName;
}