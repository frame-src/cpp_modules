#include "../inc/PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cctype>

PhoneBook::PhoneBook(void)
{
	index = 0;
	noSpace = false;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::add_new_contact(void)
{
	if(this->index == 8){
		if(noSpace == false)
			noSpace = true;
		this->index = 0;
	}
	if(noSpace == true)
		std::cout << "memory full, we are gonna overwrite someone, in this case the: " << this->index + 1 << std::endl;
	this->contacts[index].contact_settings();
	this->index++;
}

void	PhoneBook::search_contact(void)
{
	std::string		arg;
	int				index;
	bool garbage = true;
	while(garbage == true)
	{
		std::cout << "Enter the Contact index: " << std::endl;
		std::cin >> arg;
		if(isdigit(arg[0]) && arg.length() < 2)
		{
			index = stoi(arg);
			if(index < 8 && index >= 0)
				garbage = false;
		}
		if(garbage == true)
		std::cout << "pls no garbage: 0 <= ONLY 1 DIGIT < 8" << std::endl;
	}
	this->contacts[index].get_contact_info();
}
