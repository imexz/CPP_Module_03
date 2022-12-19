/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:13:38 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 15:36:48 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {

	std::cout << "FragTrap Default constructor called" << std::endl;
	_name = "unknown";
	_hitpoints = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "FragTrap Parameterized constructor called" << std::endl;
	_name = name;
	_hitpoints = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap(FragTrap const &src) {

	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void) {

	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &src) {

	std::cout << "Assignment operator called" << std::endl;
	_name = src.getName();
	_hitpoints = src.getHitpoints();
	_energy = src.getEnergy();
	_attack = src.getAttack();

	return (*this);
}

void	FragTrap::attack(const std::string &target) {

	if (_hitpoints == 0 || _energy == 0) {
		std::cout 	<< this->getName() << " can't do anything due to lack of hit points or energy!"
					<<std::endl;
		return ;
	}
	std::cout	<< "FragTrap " << this->getName() << " attacks "
				<< target << ", causing " << this->getAttack()
				<< " points of damage!" << std::endl;
	_energy--;
}

void	FragTrap::highFivesGuys(void) {

	std::cout << _name << " sends out a high fives request" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, FragTrap const &i) {

	o << "Name: " << i.getName() << std::endl;
	o << "Hitpoints: " <<i.getHitpoints() << std::endl;
	o << "Energy: " <<i.getEnergy() << std::endl;
	o << "Attack Damage: " <<i.getAttack() << std::endl;
	return (o);
}
