/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:05:43 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 15:13:58 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain() {
	std::cout << "BRAIN default constructor called" << std::endl;
	for (int i = 0;i < 100;i++)
		this->ideas[i] = "";
}

Brain::Brain(Brain const &other) {
	std::cout << " BRAIN default copy constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = other.getIdea(i);
}

Brain &Brain::operator=(Brain const &other) {
	std::cout << " BRAIN default copy constructor operator called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = other.getIdea(i);
	return (*this);
}

Brain::~Brain() {
	std::cout << "BRAIN destructor called" << std::endl;
}

void Brain::setIdea(std::string idea, int index) {
	if( index >= 0 && index < 100)
		this->ideas[index] = idea;
	else
		std::cout << "I don't have that big brain";
}

std::string Brain::getIdea(int index) const {
	if( index >= 0 && index < 100)
		return (this->ideas[index]);
	else
		std::cout << "I don't have that big brain";
	return("\0");
}