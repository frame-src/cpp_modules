#include "PhoneBook.hpp"

int main ()
{
	PhoneBook phonebook;
	
	std::string    arg;
	std::cout << "Hello, this is a really special PhoneBook: \n pls insert a contact with ADD, search with SEARCH or EXIT." << std::endl;
	while(1)
	{
		
		std::cin >> arg;
		if ( arg == "ADD"){
			std::cout << "Ok. Give me something to ADD;" << std::endl;
			phonebook.add_new_contact();
		}
		else if (arg == "SEARCH"){
			std::cout << "yes... lets SEARCH for something:" << std::endl;
			phonebook.search_contact();
		}
		else if (arg == "EXIT"){
			break;
		}
		else
			std::cout << "this is garbage, ADD, SEARCH or EXIT" << std::endl;
	}
	std::cout << "GOODBYE...  ( ° ͜ʖ͡°)╭∩╮" << std::endl;
	return (0);
}
