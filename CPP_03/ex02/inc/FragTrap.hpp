/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmessin <frmessin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:54:27 by frmessin          #+#    #+#             */
/*   Updated: 2022/12/12 13:54:28 by frmessin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const &other);
		~FragTrap();

		FragTrap	&operator=(FragTrap const &other);
		void		highFivesGuys(void);
};

#endif