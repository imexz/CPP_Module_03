/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:13:40 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 00:32:02 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {

	DiamondTrap	a;
	DiamondTrap	b ("Mike");
	DiamondTrap	c (b);
	DiamondTrap	d ("Simon");

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

	d.highFivesGuys();
	d.guardGate();

	d.whoAmI();

	return (0);
}
