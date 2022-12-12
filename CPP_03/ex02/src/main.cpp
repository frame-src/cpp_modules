/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:54:37 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:54:38 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

int main(void)
{
	ClapTrap Player("BATUSH");
	ScavTrap Player2("BEAR");
	FragTrap Player3("PENGUIN");

	//ScavTrap bear("Bear");
	std::cout << " A " << Player3.getName() << " Spawn " << std::endl;
	Player3.highFivesGuys();
	std::cout << " The " << Player.getName() << " is alive cause of a random Sorcery" << std::endl;
	Player3.attack(Player.getName());
	Player.takeDamage(Player3.getAttack());
	std::cout << " Dead... what a pity " << Player.getName() <<"..." << std::endl;
	std::cout << "The "<< Player2.getName() << " come back again disturbed by the noise. The PENGUIN is made of meat... and the BEAR is hungry" << std::endl;
	while (Player3.getHit() > 0){
		Player2.attack(Player3.getName());
		Player3.takeDamage(Player2.getAttack());
	}
	std::cout << " The "<< Player3.getName() << " is made of paper... (So why BATUSH is being slapped by a PENGUIN made of paper?) \n SUDDENTLY the " << Player2.getName() << " attack himself (WHY?) " << std::endl;
	while (Player2.getHit() > 0){
		Player2.attack(Player2.getName());
		Player2.takeDamage(Player2.getAttack());
	}
}