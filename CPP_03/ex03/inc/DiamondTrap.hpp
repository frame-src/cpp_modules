/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:54:53 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:54:54 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
/*
In object-oriented programming, the diamond problem is a situation that can arise when multiple inheritance is used.
It occurs when a class inherits from two different classes, which both inherit from a third class. 
This creates a "diamond" shape in the inheritance hierarchy, as shown below:
  A
 / \
B   C
 \ /
  D
In this situation, the class D inherits from both B and C, which both inherit from A.
If A defines a member variable or function that is also defined in both B and C, then D will inherit two conflicting definitions of that member.
This can cause problems when the member is accessed from D, because it is not clear which definition should be used.
To avoid this problem, many programming languages, including C++, provide mechanisms for resolving conflicts in multiple inheritance. 
For example, in C++, you can use the virtual keyword to specify that a base class should be treated as a virtual base class.
This ensures that only a single copy of the base class is inherited, even if it is inherited through multiple paths.

Overall, the diamond problem is a potential issue to be aware of when using multiple inheritance, and it is important to design your inheritance hierarchies carefully to avoid conflicts.
*/
class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &other);
	~DiamondTrap();

	DiamondTrap &operator=(DiamondTrap const &other);
	void attack(std::string const &target);
	void whoAmI();

	std::string getName() const;
};

#endif
