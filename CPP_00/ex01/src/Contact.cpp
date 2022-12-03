#include "../inc/Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	this->fields[0] = "name";
	this->fields[1] = "last name";
	this->fields[2] = "nickname";
	this->fields[3] = "phone number";
	this->fields[4] = "darkest secret";
}

Contact::~Contact(void)
{
}

void Contact::contact_settings(void)
{
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "Insert the" << this->fields[i] << ":\n";
		std::getline(std::cin, this->fields[i]);
		if(this->fields[i].length() == 0)
		{
			std::cout << "!ATTENTION! no empty field!" << std::endl;
			--i;
		}
	}
	std::cout << "Contact added !" << std::endl;
}

void Contact::get_contact_info(void)
{
	for (int i = 0; i <= 3; i++)
	{
		std::cout << "|";
		if (this->fields[i].length() > 10)
			std::cout << this->fields[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->fields[i];
	}
	std::cout << "|" << std::endl;
}
