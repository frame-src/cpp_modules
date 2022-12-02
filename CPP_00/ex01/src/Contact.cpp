#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact(){
	std::string Contact::fields[5] =
	{
		"name",
		"last name",
		"nickname",
		"phone number",
		"darkest secret"
	};
}

Contact::~Contact(){
}

Contact Contact::contact_settings(void)
{
	for (int i = 0; i <= 4; i++)
	{
		std::cout << "Insert the" << Contact::fields[i] << ":\n";
		std::getline(std::cin, Contact::columns[i]);
		if(Contact::columns[i].lenght() == 0){
			std::cout << "!ATTENTION! no empty field!" << std::endl;
			--i;
		if(Contact::columns[i] == "EXIT")
			return (NULL);
		}
	}
	std::cout << "Contact added !" << std::endl;
	return (Contact);
}

void Contact::get_contact(Contact::contact)
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = 0; i <= 3; i++)
	{
		std::cout << "|";
		if (Contact:contact.columns[i].length() > 10)
			std::cout << Contact:contact.columns[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << Contact:contact.columns[i];
	}
	std::cout << "|" << std::endl;	
}
