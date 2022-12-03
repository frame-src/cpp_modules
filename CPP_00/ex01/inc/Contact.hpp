#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
/*
-	4 columns: INDEX, FIRST NAME, SECOND NAME, NICKNAME, DARKESTSECRET;
-	each column is 10 char wide;
-	beetween each column there is a pipe |;
-	if you reach the 10 char and the string continue it should truncate with '.';
-	
-	if maximum size is reached add the 9th replacing the "oldest";
*/
class Contact {
private:
	std::string		fields_name[5];
	std::string		fields[5];

public:
	Contact(void);
	~Contact(void);

	void	contact_settings(void);
	void	get_contact_info(void);
	void	print_table( int index);
};

#endif

/*
	classes are kind of data struct in C;
	classes can be init as class, struct, or union
	the difference between class and struct is the default access level;
	
	``` c++
	class class_name {
  		access_specifier_1:
    	member1;
  		access_specifier_2:
    	member2;
  		...
	} object_names;
	```

	object_names: is an optional list of names for the objects of this class;
	for example:
	class_name -> Triangle
	object_names -> rectangle, isoscele, equilatero, scaleno.

	members: this can be data or function declarations.

	access specifiers: private or public for example.

*/