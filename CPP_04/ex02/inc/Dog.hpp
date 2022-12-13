/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:21:05 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 15:20:03 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>
#include <iostream>

class Dog : public Animal {

	private:
		std::string	type;
		Brain		*brain;

	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const &other);
		Dog &operator=(Dog const &other);
		~Dog();

		void makeSound() const;
		Brain *getBrain() const;
		std::string getType() const;
};

#endif