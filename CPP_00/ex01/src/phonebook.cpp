#include "../inc/PhoneBook.hpp"

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
	if(index == 8){
		if(noSpace == false)
			noSpace = true;
		index = 0;
	}
	if(noSpace == true)
		std::cout << "memory full, we are gonna overwrite someone" << index + 1 << std::endl;
	this->contacts[index].contact_settings();
	++index;
}

void	PhoneBook::search_contact(void)
{
	int index;
	std::cout << "Enter the Contact index: " << std::endl;
	std::cin >> index;
	this->contacts[index].get_contact_info();
}
