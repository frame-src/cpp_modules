/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:16:20 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 14:56:38 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{
	std::cout << std::endl;
	{
		std::cout << "*** MANDATORY ***" << std::endl;
		{
			Animal *meta = new Animal();
			Animal *dog = new Dog("cat");
			Animal *cat = new Cat("dog");
			std::cout << dog->getType() << " " << std::endl;
			std::cout << cat->getType() << " " << std::endl;
			std::cout << meta->getType() << " " << std::endl;
			cat->makeSound();
			dog->makeSound();
			meta->makeSound();
			delete dog;
			delete cat;
			delete meta;
		}
	}

	std::cout << std::endl;
	{
		std::cout << "*** WRONG ANIMAL ***" << std::endl;
		{
			const WrongAnimal* meta = new WrongAnimal();
			const WrongAnimal* wrongCat = new WrongCat();

			std::cout << wrongCat->getType() << " " << std::endl;
			wrongCat->makeSound();
			meta->makeSound();
			
			delete meta;
			delete wrongCat;
		}
	}
	
	system("leaks animals");

return 0;
}

