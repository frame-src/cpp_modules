#include "../inc/Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	this->fields_name[0] = "Name";
	this->fields_name[1] = "Last name";
	this->fields_name[2] = "Nickname";
	this->fields_name[3] = "Phone number";
	this->fields_name[4] = "Darkest secret";
}

Contact::~Contact(void)
{
}

void Contact::contact_settings(void)
{
	std::string arg;
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "Insert the " << this->fields_name[i] << ":\n";
		while(std::getline(std::cin, arg))
		{
			this->fields[i] = arg;
			if(this->fields[i].length() == 0)
			{
				std::cout << "!ATTENTION! no empty field!" << std::endl;
				--i;
			}
			break;
		}
		if(arg == "\0")
			return;
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

void Contact::print_table(int index)
{
	int		j;

	j = 0;
	if(index == 0)
	{
		while(j < 4)
		{
			if(j == 0)
				std::cout << "#0|";
			else
				std::cout << "|";
			if (this->fields_name[j].length() > 10)
				std::cout << this->fields_name[j].substr(0, 10);
			else
				std::cout << std::setw(10) << this->fields_name[j];
			std::cout << "|";
			if(j == 3)
				std::cout << std::endl;
			j++;
		}
	}
	j = 0;
	while(j < 4)
	{
		if(j == 0)
				std::cout <<"#" << index + 1 << "|";
			else
				std::cout << "|";
		if (this->fields_name[j].length() > 10)
				std::cout << this->fields_name[j].substr(0, 10);
		else
			std::cout << std::setw(10) << this->fields[j];
		std::cout << "|";
		if(j == 3)
			std::cout << std::endl;
		j++;
	}
}