/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:13:38 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 15:30:48 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("unknown"), _hitpoints(10), _energy(10), _attack(0) {

	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energy(10) , _attack(0) {

	std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src) {

	std::cout << "Assignment operator called" << std::endl;
	_name = src.getName();
	_hitpoints = src.getHitpoints();
	_energy = src.getEnergy();
	_attack = src.getAttack();
	return (*this);
}

std::string	ClapTrap::getName(void) const {

	return (_name);
}

unsigned int	ClapTrap::getHitpoints(void) const {

	return (_hitpoints);
}

unsigned int	ClapTrap::getEnergy(void) const {

	return (_energy);
}

unsigned int	ClapTrap::getAttack(void) const {

	return (_attack);
}

bool	ClapTrap::setHitpoints(unsigned int hitpoints) {

	if (_hitpoints == 0 || _energy == 0)
		return (false);
	_hitpoints += hitpoints;
	return (true);
}

bool	ClapTrap::setEnergy(unsigned int energy) {

	if (_hitpoints == 0 || _energy == 0)
		return (false);
	_energy += energy;
	return (true);
}

bool	ClapTrap::setAttack(unsigned int attack) {

	if (_hitpoints == 0 || _energy == 0)
		return (false);
	_attack += attack;
	return (true);
}

void	ClapTrap::attack(const std::string &target) {

	if (_hitpoints == 0 || _energy == 0) {
		std::cout 	<< this->getName() << " can't do anything due to lack of hit points or energy!"
					<<std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << this->getName() << " attacks "
				<< target << ", causing " << this->getAttack() << " points of damage!"
				<< std::endl;
	_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (_hitpoints == 0 || _energy == 0) {
		std::cout 	<< this->getName() << " can't do anything due to lack of hit points or energy!"
					<<std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << this->getName() << " takes "
				<< amount << " points of damage!"
				<< std::endl;
	if (_hitpoints < amount)
		_hitpoints = 0;
	else
		_hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_hitpoints == 0 || _energy == 0) {
		std::cout 	<< this->getName() << " can't do anything due to lack of hit points or energy!"
					<<std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << this->getName() << " gets repaired, causing "
				<< amount << " hit points to be restored!" << std::endl;
	_hitpoints += amount;
	_energy--;
}

std::ostream	&operator<<(std::ostream &o, ClapTrap const &i) {

	o << "Name: " << i.getName() << std::endl;
	o << "Hitpoints: " <<i.getHitpoints() << std::endl;
	o << "Energy: " <<i.getEnergy() << std::endl;
	o << "Attack Damage: " <<i.getAttack() << std::endl;
	return (o);
}
