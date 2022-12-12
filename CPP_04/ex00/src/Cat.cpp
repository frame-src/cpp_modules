/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:10:43 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 15:40:01 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"

Cat::Cat() {
	this->type = "cat";
}

Cat::Cat(std::string type) : Animal("Mammifer") {
	this->type = type;
}

Cat::~Cat() {
	;
}

std::string Cat::getType() {
	return this->type;
}

void Cat::makeSound() {
	std::cout << " *** WOF *** " << std::endl;
}