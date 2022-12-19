/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:13:40 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/31 15:30:57 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	a;
	ClapTrap	b ("Mike");
	ClapTrap	c (b);
	ClapTrap	d ("Simon");

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
	return (0);
}
