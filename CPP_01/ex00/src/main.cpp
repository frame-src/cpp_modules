#include "../inc/Zombie.hpp"

// void leaks(void)
// {
// 	system("leaks zombie");
// }
int main (int argc, char *argv[])
{
	if(argc != 2)
	{
		std::cout << " INSERT ./zombie [NAMEOFTHEZOMBIE]";
		std::cout << std::endl;
		return 0;
	}
	std::string suffix = argv[1];
	std::string zombieName;

	zombieName = suffix + "_intheSTACK";
	Zombie zombie1(zombieName);
	zombie1.announce();
	std::cout << std::endl;
	zombieName = suffix + "_intheHEAP";
	Zombie *zombie2 = newZombie(zombieName);
	zombie2->announce();
	std::cout << std::endl;
	zombieName = suffix + "_intheCHAMP";
	randomChump(zombieName);
	std::cout << std::endl;
	delete (zombie2);
}


