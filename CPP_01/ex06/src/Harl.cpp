#include "../inc/Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";	
	std::cout << std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

enum state {DEBUG, INFO, WARNING,ERROR};

void Harl::complain(std::string level)
{
	void (Harl::*fP[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string states[4] = {"debug", "info", "warning", "error"};
	int i = 0;
	while(i < 4)
	{
		if(level == states[i])
			break;
		i++;
	}
	switch(i)
	{
		case DEBUG:
			(this->*fP[DEBUG])();
		case INFO:
			(this->*fP[INFO])();
		case WARNING:
			(this->*fP[WARNING])();
		case ERROR:
			(this->*fP[ERROR])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

