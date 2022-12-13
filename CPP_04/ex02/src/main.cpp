/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:16:20 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 15:39:23 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "///////////// TEST /////////////"<< std::endl;
	std::cout << "-->CAT " << std::endl;
	std::cout << "////////////////////////////////"<< std::endl;
	{
		Cat *cat = new Cat();
		cat->getBrain()->setIdea("am I dead or alive?", 0);
		std::cout << cat->getBrain()->getIdea(0) << std::endl;
		delete cat;
	}
	std::cout << std::endl;
	std::cout << "////////////////////////////////"<< std::endl;
	std::cout << "-->DOG " << std::endl;
	std::cout << "////////////////////////////////"<< std::endl;
	{
		Dog *dog= new Dog();
		dog->getBrain()->setIdea("eat eat eat eat", 0);
		dog->getBrain()->setIdea("run run run",1);
		dog->getBrain()->setIdea("run run run",1);
		std::cout << dog->getBrain()->getIdea(1) << std::endl;
		delete dog;
	}
	std::cout << std::endl;
	std::cout << "////////////////////////////////"<< std::endl;
	std::cout << "-->MANDATORY " << std::endl;
	std::cout << "////////////////////////////////"<< std::endl;
	{
		const int num = 6;
		const Animal *arr[num];

		for (int i = 0;i < num / 2;i++)
		{
			arr[i] = new Dog();
		}
		for (int i = num / 2;i < num;i++)
		{
			arr[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0;i < num;i++)
		{
			std::cout << arr[i]->getType() << ": ";
			arr[i]->makeSound();
			delete arr[i];
			std::cout << std::endl;
		}
	}
	system("leaks animals");
	return 0;
}