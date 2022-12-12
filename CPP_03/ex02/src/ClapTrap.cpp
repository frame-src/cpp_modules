/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:54:32 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:54:33 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"

ClapTrap::ClapTrap() : name("NO ID"), hitPoints(10), energyPoints(10), attackDamage(0) {

	std::cout << "Hello hello. Default Constructor " << this->name << " here" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {

	std::cout << "Hello hello. Default Constructor " << this->name << " here" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) : name(other.getName()) {
	std::cout << "Hello hello. Copy Constructor" << std::endl;
	this->hitPoints = other.getHit();
	this->energyPoints = other.getEnergy();
	this->attackDamage = other.getAttack();
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other) {
	std::cout << "Hello hello. Copy assignment operator" << std::endl;
	this->name = other.getName();
	this->hitPoints = other.getHit();
	this->energyPoints = other.getEnergy();
	this->attackDamage = other.getAttack();
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << " Destructor " << this->name << " here." << " Bye see you soon." << std::endl;
}

void ClapTrap::attack(std::string const &target) {
	if(this->energyPoints > 0) {
		std::cout << this->name << " Attack; "
				  << target << " has lost :" 
				  << this->attackDamage << std::endl;
		this->energyPoints--;
	} else {
		std::cout << this->name << " * no energy *" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if(this->energyPoints > 0) {
		std::cout << this->name << " Repair himself hitPoints + " << amount << std::endl;
		this->hitPoints = this->hitPoints + amount;
		this->energyPoints--;
	} else {
		std::cout << this->name << "* no energy *" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if(this->hitPoints == 0)
		return;
	int newAmount = this->hitPoints - amount;
	if(newAmount > 0) {
		std::cout << this->name << " Have " << newAmount << " Health left" << std::endl;
		this->hitPoints = newAmount;
	} else {
		std::cout << this->name << " Received " << amount << " damage" << std::endl;
		std::cout << this->name << " * IS DEAD *" << std::endl;
		this->energyPoints = 0;
		this->hitPoints = 0;
	}
	
}

std::string ClapTrap::getName() const {
	return (this->name);
}

unsigned int ClapTrap::getHit() const {
	return (this->hitPoints);
}

unsigned int ClapTrap::getEnergy() const {
	return this->energyPoints;
}

unsigned int ClapTrap::getAttack() const {
	return this->attackDamage;
}