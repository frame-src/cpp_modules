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
		std::cout << "Insert the" << Contact::fields_name[i] << ":\n";
		std::getline(std::cin, Contact::Contact.columns[i]);
	}
	size_t totalLength = 0;
	for (int i = FirstName; i <= Secret; i++)
		totalLength += this->informations[i].length();
	if (totalLength == 0)
	{
		std::cout << "# Empty contact not added !" << std::endl;
		return (false);
	}
	std::cout << "# Contact added !" << std::endl;
	return (true);
}