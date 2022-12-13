/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:21:05 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 14:54:44 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

#include <string>
#include <iostream>

class Dog : public Animal {

	private:
		std::string	type;

	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const &other);
		Dog &operator=(Dog const &other);
		~Dog();

		void makeSound() const;
		std::string getType() const;
};

#endif