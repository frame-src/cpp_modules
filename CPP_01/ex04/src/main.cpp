#include <string>
#include <iostream>
#include <fstream>

/*
	read from file argv[0] every line.
	search for s1, if s1 is found;
	str[n] + s2 + &str[length(s1)];
	the std::string::npos == -1;
*/

int	wrongInput(std::string fileName, std::string s1, std::string s2){
	if (fileName.empty() || s1.empty() || s2.empty()) {
		std::cout << "wrong input" << std::endl;
		return (true);
	}
	return (false);
}

int main (int argc, char *argv[])
{
	std::string		str;
	std::string		s1;
	std::string		s2;
	std::string		fileName;
	std::fstream	file;
	std::fstream	newFile;
	size_t			index;

	if (argc != 4 && wrongInput(argv[1], argv[2], argv[3]))
			return -1;
	s1 = argv[2];
	s2 = argv[3];
	fileName = argv[1];
	file.open(fileName, std::fstream::in);
	if(file.is_open()){
		newFile.open(fileName + ".replace", std::fstream::out);
		if(newFile.is_open())
		{
			while(std::getline(file,str))
			{
				index = str.find(s1);
				if( index == -1)
					;
				else{
					while( index != -1) 
						{
							str = str.substr(0,index) + s2 + str.substr(index + s1.length(), str.length() - (index + s1.length()));
							index = str.find(s1);
						}
					}
				if(file.eof())
					newFile << str;
				else
					newFile << str << std::endl;
			}
			newFile.close();
		}
		file.close();
	} else {
		std::cout << fileName << " open failure " << std::endl;
		return (1);
	}
	return (0);
}
