/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:54:15 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:54:16 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main(void)
{
	ClapTrap Player("BATUSH");
	ClapTrap Enemy("SNAKE");
	ScavTrap Player2("BEAR");

	//ScavTrap bear("Bear");
	std::cout << " The Noise made by the " << Player.getName() << " wake up a " << Player2.getName() << std::endl;
	Player2.guardGate();
	std::cout << " The " << Player.getName() << " is back cause of a random Sorcery" << std::endl;
	Player2.attack(Enemy.getName());
	Enemy.takeDamage(130);
	Player.beRepaired(100);
	std::cout << Player.getName() << " now has " << Player.getHit() << " Health but..." << std::endl;
	std::cout << Player.getName() << " is poisoned" << std::endl;
	Player.takeDamage(130);
	std::cout << " Dead... what a pity " << Player.getName() <<"..." << std::endl;
	std::cout << " The BEAR attack himself (WHY?) " << std::endl;
	while (Player2.getHit() > 0){
		Player2.attack(Player2.getName());
		Player2.takeDamage(Player2.getAttack());
	}
}