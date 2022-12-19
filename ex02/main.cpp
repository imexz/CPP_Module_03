/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:13:40 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/30 23:15:41 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	FragTrap	a;
	FragTrap	b ("Mike");
	FragTrap	c (b);
	FragTrap	d ("Simon");

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


	return (0);

	return (0);
}
