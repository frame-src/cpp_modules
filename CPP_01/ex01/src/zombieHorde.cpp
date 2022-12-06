#include "../inc/Zombie.hpp"

void randomChump( std::string name )
{
	Zombie *zombie;
	zombie = newZombie(name);
	zombie->announce();
	delete zombie;
}

Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

Zombie* zombieHorde(int N, std::string name )
{
	int	i = 0;
	Zombie *horde = new Zombie[N];
	while(i < N)
	{
		horde[i].setZombieName(name);
		i++;
	}
	return (horde);
}
