#include <iostream>

int main (int argc, char *argv[]){

	int i = 1, j = 0;

	if(argc == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	} else {
		while(i < argc){
			j = 0;
			while(argv[i][j]){
				argv[i][j] = toupper(argv[i][j]);
				j++;
			}
			sdt::cout << toupper(argv[i]);
			i++;
		}
		std::endl;
	}
	//std::cout << "MEGAPHONEEEEEEEE" <<std::end1;	return 10;
	return 0;
}
