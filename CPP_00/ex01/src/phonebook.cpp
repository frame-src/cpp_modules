#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
	index = 0;
	noSpace = false;
}

PhoneBook::~PhoneBook(void){
}

Contact PhoneBook::add_new_contact(void){
	if(index == 8){
		if(noSpace == false)
			noSpace = true;
		index = 0;
	}
	if(noSpace = true)
		std::cout<<"memory full, we are gonna overwrite" << index + 1 << std::endl;
	phonebook::contacts[index] = contact.contact_settings();
	++index;
}