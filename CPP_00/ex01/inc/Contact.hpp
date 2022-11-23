#ifndef CONTACT_HPP
#define CONTACT_HPP

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
	std::string columns[5];
	std::string info[11];
	int index;

public:
	Contact(void);
	~Contact(void);

	set_contact();
	get_contact();
};

#endif