#include <iostream>

std::string	upperCase(std::string str){
	int i = 0;
	while(str[i]){
		str[i] = toupper(str[i]);
		i++;
	}
	return str;
}

int main (int argc, char *argv[]){

	int i = 1;

	if(argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	} else {
		while(i < argc){
			std::cout << upperCase(argv[i]);
			i++;
			if(argv[i])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	//std::cout << "MEGAPHONEEEEEEEE" <<std::end1;	return 10;
	return 0;
}
