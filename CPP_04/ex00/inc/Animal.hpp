/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:53:49 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 15:46:14 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal {

	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &other);
		Animal &operator=(Animal const &other);
		~Animal();

		virtual void makeSound();
		virtual std::string getType();

};

#endif