/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:10:43 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 14:54:21 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Mammifer") {
	std::cout << "std constructor for the Cat called" << std::endl;
	this->type = "cat";
}

Cat::Cat(std::string type) : Animal("Mammifer") {
	std::cout << "std constructor(std::string) for the Cat called"  << std::endl;
	this->type = "cat";
}

Cat::Cat(Cat const &other)
{
	std::cout << "copy constructor for the Cat called" << std::endl;
	this->type = other.getType();
}

Cat &Cat::operator=(Cat const &other)
{
	std::cout << "copy assignment operator for the Cat called" << std::endl;
	this->type = other.getType();
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}

void Cat::makeSound() const {
	std::cout << " *** MEOW *** " << std::endl;
}