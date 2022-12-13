/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:12:36 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 14:54:06 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() {
	std::cout << "std constructor for the Dog called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type) : Animal("Mammifer"){
	this->type = type;
}

Dog::Dog(Dog const &other) {
	std::cout << "copy constructor for the Dog called" << std::endl;
	this->type = other.getType();
}

Dog &Dog::operator=(Dog const &other) {
	std::cout << "copy assignment operator for the Dog called" << std::endl;
	this->type = other.getType();
	return *this;
}


Dog::~Dog() {
	std::cout << "Cat destructor called" << std::endl;
}

std::string Dog::getType() const {
	return this->type;
}

void Dog::makeSound() const {
	std::cout << " *** WOF *** " << std::endl;
}