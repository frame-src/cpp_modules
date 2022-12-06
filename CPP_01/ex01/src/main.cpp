#include "../inc/Zombie.hpp"

int main ()
{
	int			i = 0;
	std::string	zombieName = "Alfio";

	Zombie *zombies = zombieHorde(10, "zombieName");
	while (i < 10)
		zombies[i++].announce();
	i = 0;
	delete [] zombies;
	return (0);
}
