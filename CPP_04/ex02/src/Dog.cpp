/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:12:36 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 15:17:39 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() {
	std::cout << "DOG std constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(std::string type) : Animal("Mammifer"){
	this->type = type;
}

Dog::Dog(Dog const &other) {
	std::cout << "DOG copy constructor called" << std::endl;
	this->type = other.getType();
}

Dog &Dog::operator=(Dog const &other) {
	std::cout << "DOG copy assignment operator called" << std::endl;
	this->type = other.getType();
	return *this;
}

Dog::~Dog() {
	if(this->brain)
		delete this->brain;
	std::cout << "DOG destructor called" << std::endl;
}

std::string Dog::getType() const {
	return this->type;
}

Brain *Dog::getBrain() const {
	return this->brain;
}

void Dog::makeSound() const {
	std::cout << " *** WOF *** " << std::endl;
}