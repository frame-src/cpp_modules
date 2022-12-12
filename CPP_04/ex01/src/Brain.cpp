/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:05:43 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 22:18:37 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain() {
	///;
}

Brain::Brain(Brain const &other) {
	this->ideas = other.getIdeas();
}

Brain::~Brain() {
	///should I delete something?
}

std::string Animal::getType() {
	return this->type;
}

void Animal::makeSound() {
	std::cout << " *** NO SOUND *** " << std::endl;
}