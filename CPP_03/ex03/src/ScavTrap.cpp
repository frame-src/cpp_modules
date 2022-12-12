/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:55:28 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:55:29 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap (name) {
	std::cout << "Hello hello. Default Constructor ScavTrap constructor for ID: " << name << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap() : ClapTrap () {
	std::cout << "Hello hello. Default Constructor ScavTrap for no ID." << std::endl;
	this->name = "NO ScavTrapID";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << " Destructor " << this->getName() << " ScavTrap here." << " Bye see you soon." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "Hello hello. Copy Constructor" << other.getName() << "called" << std::endl;
	this->name = other.getName();
	this->hitPoints = other.getHit();
	this->energyPoints = other.getEnergy();
	this->attackDamage = other.getAttack();
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "Hello hello. Scav Trap Copy assignment operator" << other.getName() << "called" << std::endl;
	this->name = other.getName();
	this->hitPoints = other.getHit();
	this->energyPoints = other.getEnergy();
	this->attackDamage = other.getAttack();
	return (*this);
}

void ScavTrap::attack(const std::string& target){
	if(this->energyPoints > 0) {
		std::cout << this->name << " ScavTrap Attack; "
				  << target << " has lost :" 
				  << this->attackDamage << std::endl;
		this->energyPoints--;
	} else {
		std::cout << this->name << " * no energy *" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap\n  " << this->name << " is now in Gate keeper mode." << std::endl;
}