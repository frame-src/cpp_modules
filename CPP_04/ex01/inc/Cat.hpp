/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:04:12 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 15:38:22 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

#include <string>
#include <iostream>

class Cat : public Animal {

	private:
		std::string	type;
	
	public:
		Cat();
		Cat(std::string type);
		Cat(Cat const &other);
		Cat &operator=(Cat const &other);
		~Cat();

		void makeSound();
		void whoAmI();
		std::string getType();
};

#endif