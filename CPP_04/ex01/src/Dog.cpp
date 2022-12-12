/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:12:36 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 22:06:59 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() {
	this->type = "unknown";
}

Dog::Dog(std::string type) : Animal("Mammifer"){
	this->type = type;
}

Dog::~Dog() {
	;
}

std::string Dog::getType() {
	return this->type;
}

void Dog::makeSound() {
	std::cout << " *** MEOW *** " << std::endl;
}