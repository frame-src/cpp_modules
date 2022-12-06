#include "../inc/Harl.hpp"
#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";	
	std::cout << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ears whereas you started working here since last month.";
	std::cout << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	void (Harl::*fP[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string states[3] = {"debug", "info", "warning"};
	while(i < 3)
	{
		if(level == states[i])
		{
			(this->*fP[i])();
			return ;
		}
		i++;
	}
	(this->*fP[i])();
}

