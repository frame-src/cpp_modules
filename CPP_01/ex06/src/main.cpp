#include "../inc/Harl.hpp"

int main ()
{
	Harl harl;
	harl.complain("debug");
	std::cout << std::endl;
	// harl.complain("info");
	harl.complain("warning");
	std::cout << std::endl;

	// harl.complain("error");
	// harl.complain("ferwrwr");
	harl.complain("otherwise");
	std::cout << std::endl;

	// harl.complain("SBEM")