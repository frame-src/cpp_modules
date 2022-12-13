/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:59:15 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 16:57:04 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AAnimal.hpp"

Animal::Animal() {
	this->type = "unknown";
}

Animal::Animal(std::string type) {
	this->type = type;
}

Animal::~Animal() {
	;
}

std::string Animal::getType() const{
	return this->type;
}

void Animal::makeSound() const{
	std::cout << " *** NO SOUND *** " << std::endl;
}