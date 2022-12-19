/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:19:28 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 00:34:10 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {

	std::cout << "DiamondTrap Default constructor called" << std::endl;

	FragTrap	fraggy;
	ScavTrap	scavvy;

	_name = "unknown";
	ClapTrap::_name = DiamondTrap::_name + "_clap_name";
	_hitpoints = fraggy.getHitpoints();
	_energy = scavvy.getEnergy();
	_attack = fraggy.getAttack();
}

DiamondTrap::DiamondTrap(std::string name) {

	std::cout << "DiamondTrap Parameterized constructor called" << std::endl;

	FragTrap	fraggy;
	ScavTrap	scavvy;

	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hitpoints = fraggy.getHitpoints();
	_energy = scavvy.getEnergy();
	_attack = fraggy.getAttack();
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) {

	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src) {

	std::cout << "DiamondTrap Assignment operator called" << std::endl;
	_name = src._name;
	ClapTrap::_name = src.getClapTrapName();
	_hitpoints = src.getHitpoints();
	_energy = src.getEnergy();
	_attack = src.getAttack();
	return (*this);
}

std::string	DiamondTrap::getClapTrapName(void) const{

	return (ClapTrap::_name);
}

std::string DiamondTrap::getName(void) const {

	return (_name);
}

void	DiamondTrap::attack(const std::string &target) {

	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {

	std::cout << "Name DiamondTrap: " << _name << std::endl;
	std::cout << "Name ClapTrap: " << ClapTrap::_name << std::endl;
}

std::ostream	&operator<<(std::ostream &o, DiamondTrap const &i) {

	o << "Name: " << i.getName() << std::endl;
	o << "ClapTrap Name: " << i.getClapTrapName() << std::endl;
	o << "Hitpoints: " <<i.getHitpoints() << std::endl;
	o << "Energy: " <<i.getEnergy() << std::endl;
	o << "Attack Damage: " <<i.getAttack() << std::endl;
	return (o);
}
