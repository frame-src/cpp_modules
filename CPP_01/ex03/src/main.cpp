#include "../inc/HumanB.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/Weapon.hpp"

int main()
{

{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setWeaponType("some other type of club");
	bob.attack();
}
{
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setHumanWeapon(club);
	jim.attack();
	club.setWeaponType("some other type of club");
	jim.attack();
}
return (0);
}