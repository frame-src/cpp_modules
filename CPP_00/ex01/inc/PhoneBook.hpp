#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <string>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include "Contact.hpp"
/*
-   array of contacts;
-   max size 8;
-   if maximum size is reached add the 9th replacing the "oldest";
*/
class PhoneBook{
	private:
		Contact	contacts[8];
		int		index;
		bool	noSpaceLeft;

	public:
		PhoneBook(void);
		~PhoneBook();

	Contact	add_new_contact(void);
	void	search_contact(void);
};

#endif