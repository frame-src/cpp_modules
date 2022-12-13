/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:53:49 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/13 16:57:17 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <string>
#include <iostream>

class AAnimal {

	protected:
		std::string	type;
	
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(Animal const &other);
		AAnimal &operator=(Animal const &other);
		virtual ~AAnimal();

		virtual void makeSound() const;
		virtual std::string getType() const = 0;

};

#endif