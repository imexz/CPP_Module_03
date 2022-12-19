/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:13:40 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 15:33:37 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap	a;
	ScavTrap	b ("Mike");
	ScavTrap	c (b);
	ScavTrap	d ("Simon");

	std::cout << std::endl;

	b.attack(d.getName());
	d.takeDamage(b.getAttack());
	d.beRepaired(b.getAttack());

	d.setAttack(3);
	d.attack(b.getName());
	b.takeDamage(d.getAttack());

	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	a.takeDamage(a.getHitpoints());
	a.beRepaired(a.getEnergy());

	d.guardGate();

	return (0);
}
