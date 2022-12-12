/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:55:16 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:55:17 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

//				DATA INHERIT INFO
// • Name, which is passed as parameter to a constructor
// • ClapTrap name  should be : (parameter of the constructor + "_clap_name" suffix)
// • Hit points ---> (FragTrap)
// • Energy points ---> (ScavTrap)
// • Attack damage ---> (FragTrap)
// • attack() ----> (Scavtrap)

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap() {
	this->name = ClapTrap::name;
	ClapTrap::name = ClapTrap::name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Diamond Trap is created without an ID, should only display one Default Constructor of the Clap Trap" << std::endl;
}

DiamondTrap :: DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name) , ScavTrap(name) {
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "Diamond Trap is created with an ID, it should only display one Default Constructor of the Clap Trap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) {
	this->name = other.getName();
	ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = other.getHit();
	this->energyPoints = other.getEnergy();
	this->attackDamage = other.getAttack();
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
	this->name = other.getName();
	ClapTrap::name = this->name + "_clap_name";
	this->hitPoints = other.getHit();
	this->energyPoints = other.getEnergy();
	this->attackDamage = other.getAttack();
	return *this;
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << " Destructor " << this->name << " here. " << " Bye see you soon." << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << " WHO AM I? WHO AM I? I am " << "The Yellow Dog of " << ClapTrap::name << std::endl;
	std::cout << " I am The Yellow" << this->name << std::endl;
}

std::string DiamondTrap::getName() const {
	return this->name;
}