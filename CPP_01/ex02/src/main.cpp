#include <iostream>

int main ()
{
	std::string string = "HI THIS IS BRAIN OR MAYBE NOT";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	std::cout << &string << "\n" //address of std::string;
			  << &(*stringPTR) << "\n"	//reference to the value *(std::string *);
			  << &(stringREF) << "\n" //reference of (std::string &);
			  << string << "\n" //value of the std::string
			  << *stringPTR <<"\n" //value of the std::string *
			  << stringREF; //value stored in the address string;
	std::cout << std::endl;
}