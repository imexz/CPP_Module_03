/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:13:38 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/30 22:06:34 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << "ScavTrap Default constructor called" << std::endl;

	_name = "unknown";
	_hitpoints = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) {

	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src) {

	std::cout << "Assignment operator called" << std::endl;
	_name = src.getName();
	_hitpoints = src.getHitpoints();
	_energy = src.getEnergy();
	_attack = src.getAttack();

	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (_hitpoints == 0 || _energy == 0) {
		std::cout 	<< this->getName() << " can't do anything due to lack of hit points or energy!"
					<<std::endl;
		return ;
	}
	std::cout	<< "ScavTrap " << this->getName() << " attacks "
				<< target << ", causing " << this->getAttack() << " points of damage!"
				<< std::endl;
	_energy--;
}

void	ScavTrap::guardGate(void) {
	std::cout << _name << " ScavTrap is now in Gate keeper mode." << std::endl;
}

std::ostream	&operator<<(std::ostream &o, ScavTrap const &i) {

	o << "Name: " << i.getName() << std::endl;
	o << "Hitpoints: " <<i.getHitpoints() << std::endl;
	o << "Energy: " <<i.getEnergy() << std::endl;
	o << "Attack Damage: " <<i.getAttack() << std::endl;
	return (o);
}
