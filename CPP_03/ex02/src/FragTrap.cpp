/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:54:35 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:54:36 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "Hello hello. Default Constructor FragTrap constructor for ID: " << name << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Hello hello. Default Constructor FragTrap constructor for no ID." << std::endl;
	this->name = "NO FragTrapTrapID";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << " Destructor " << this->getName() << "FragTrap here." << " Bye see you soon." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "Hello hello. Copy Constructor" << other.getName() << "called" << std::endl;
	this->name = other.getName();
	this->hitPoints = other.getHit();
	this->energyPoints = other.getEnergy();
	this->attackDamage = other.getAttack();
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "Hello hello. FragTrap Copy assignment operator" << other.getName() << "called" << std::endl;
	this->name = other.getName();
	this->hitPoints = other.getHit();
	this->energyPoints = other.getEnergy();
	this->attackDamage = other.getAttack();
	return (*this);
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "ScavTrap " << this->name << " is asking for HighFive." << std::endl;
}