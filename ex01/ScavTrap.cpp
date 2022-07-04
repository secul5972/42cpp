/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:10:20 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 14:54:22 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << name << " ScavTrap default constructor\n";
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav.name)
{
	*this = scav;
	std::cout << name << " ScavTrap copy constructor\n";
}

ScavTrap::ScavTrap(std::string newname) : ClapTrap(newname)
{
	hit = 100;
	energy = 50;
	damage = 20;
	std::cout << name << " ScavTrap name constructor\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " ScavTrap destructor\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scav)
{
	name = scav.name;
	hit = scav.hit;
	energy = scav.energy;
	damage = scav.damage;
	return (*this);
}

void ScavTrap::attack(const std::string &target)
{
	if (energy && hit)
	{
		energy--;
		std::cout << name << " ScavTrap attacks " << target << ", causing " << damage << " points of damage!\n";
	}
	else if (energy == 0)
		std::cout << name << " ScavTrap is running out of energy\n";
	else if (hit == 0)
		std::cout << name << " ScavTrap is running out of hit points\n";
}

void ScavTrap::guardGate()
{
	std::cout << name << " ScavTrap is in Gatekeeper mode\n";
}