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
	int				index = 0;

	bool garbage = true;

	for ( int i = 0; i < 8; i++)
		this->contacts[i].print_table(i);
	while (garbage == true)
	{
		std::cout << "Enter the Contact index: " << std::endl;
		std::cin >> arg;
		if (arg == "EXIT")
			return ;
		if (isdigit(arg[0]) && arg.length() < 2)
		{
			index = stoi(arg);
			if(index < 9 && index >= 1)
				garbage = false;
		}
		if (garbage == true)
		std::cout << "pls no garbage: 0 < ONLY 1 DIGIT < 9" << std::endl;
	}
	this->contacts[index -1].get_contact_info();
}
