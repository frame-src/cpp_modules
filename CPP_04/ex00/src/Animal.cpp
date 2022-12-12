/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:59:15 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 15:36:20 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

Animal::Animal() {
	this->type = "unknown";
}

Animal::Animal(std::string type) {
	this->type = type;
}

Animal::~Animal() {
	;
}

std::string Animal::getType() {
	return this->type;
}

void Animal::makeSound() {
	std::cout << " *** NO SOUND *** " << std::endl;
}