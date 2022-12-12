/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:54:04 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:54:05 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {

	protected:
		std::string			name;
		unsigned int		hitPoints;
		unsigned int		energyPoints;
		unsigned int		attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &other);
		virtual ~ClapTrap();

		ClapTrap &operator=(ClapTrap const &other);
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string		getName() const;
		unsigned int	getHit() const;
		unsigned int	getEnergy() const;
		unsigned int	getAttack() const;
};

#endif