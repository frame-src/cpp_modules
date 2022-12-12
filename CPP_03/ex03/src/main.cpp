/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:55:25 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:55:26 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main(void)
{
	ClapTrap Player("BATUSH");
	ScavTrap Player2("BEAR");
	DiamondTrap FinalBoss("DOG");

	std::cout << " A big brown strange entity is moving towards " << std::endl;
	FinalBoss.highFivesGuys();
	std::cout << " The " << Player.getName() << " is alive cause of the familiar sound" << std::endl;
	FinalBoss.attack(Player.getName());
	std::cout << " The " << FinalBoss.getName() << std::endl;
	Player.takeDamage(FinalBoss.getAttack());
	std::cout << " Dead... what a pity " << Player.getName() <<"..." << std::endl;
	FinalBoss.guardGate();
	std::cout << "The "<< Player2.getName() << " come back again disturbed by the noise. The brown entity is made of meat... and the Bear is hungry" << std::endl;
	while (FinalBoss.getHit() > 0){
		Player2.attack(FinalBoss.getName());
		FinalBoss.takeDamage(Player2.getAttack());
	}
	std::cout << " The brown entity is just dirty he is the Yello "<< FinalBoss.getName() << "(So why BATUSH is being slapped by his Dog?) \n SUDDENTLY the " << Player2.getName() << " attack himself (WHY?) " << std::endl;
	FinalBoss.whoAmI();
	while (Player2.getHit() > 0){
		Player2.attack(Player2.getName());
		Player2.takeDamage(Player2.getAttack());
	}
}