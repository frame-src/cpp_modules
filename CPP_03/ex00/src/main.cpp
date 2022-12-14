/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 15:50:22 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/11 23:53:06 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"


int main(void)
{
	ClapTrap Player("BATUSH");
	ClapTrap Enemy("SNAKE");

	std::cout << Player.getName() << " Is searching for his YELLOW DOG enjoing his walk across the Sunflowers, when suddently a snake appears." << std::endl;
	Player.attack(Enemy.getName());
	std::cout << " The " << Enemy.getName() << " is angry and attack "<< Player.getName() << " back." << std::endl;
	Enemy.attack(Player.getName());
	Player.beRepaired(100);
	std::cout << Player.getName() << " now has " << Player.getHit() << " Health but..." << std::endl;
	std::cout << Player.getName() << " is poisoned" << std::endl;
	Player.takeDamage(130);
	std::cout << " Dead... what a pity " << Player.getName() <<"..." << std::endl;
}