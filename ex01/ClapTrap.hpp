/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:13:43 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 15:33:23 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap {

	protected:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy;
		unsigned int	_attack;

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap		&operator=(ClapTrap const &src);

		std::string		getName(void) const;
		unsigned int	getHitpoints(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getAttack(void) const;
		bool			setHitpoints(unsigned int hitpoints);
		bool			setEnergy(unsigned int energy);
		bool			setAttack(unsigned int attack);

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i);
