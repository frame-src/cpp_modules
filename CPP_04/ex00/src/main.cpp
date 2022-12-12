/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:16:20 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 15:45:39 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
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
// system("leaks animals");
return 0;
}