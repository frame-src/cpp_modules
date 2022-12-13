/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:10:43 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 15:34:43 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Mammifer") {
	std::cout << "CAT std constructor called" << std::endl;
	this->brain = new Brain();
	this->type = "cat";
}

Cat::Cat(std::string type) : Animal("Mammifer") {
	std::cout << "CAT std constructor(std::string) called"  << std::endl;
	this->type = "cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &other)
{
	std::cout << "CAT copy constructor called" << std::endl;
	this->type = other.getType();
}

Cat &Cat::operator=(Cat const &other)
{
	std::cout << "CAT copy assignment operator called" << std::endl;
	this->type = other.getType();
	return *this;
}

Cat::~Cat() {
	if(this->brain)
		delete this->brain;
	std::cout << "CAT destructor called" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}

Brain *Cat::getBrain() const {
	return this->brain;
}

void Cat::makeSound() const {
	std::cout << " *** MEOW *** " << std::endl;
}