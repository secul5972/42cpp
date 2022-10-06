/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:49:04 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 14:47:23 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Noname"), hit(10), energy(10), damage(0)
{
	std::cout << name << " ClapTrap default constructor\n";
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	*this = clap;
	std::cout << name << " ClapTrap copy constructor\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hit(10), energy(10), damage(0)
{
	std::cout << name << " ClapTrap name constructor\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " ClapTrap destructor\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clap)
{
	name = clap.name;
	hit = clap.hit;
	energy = clap.energy;
	damage = clap.damage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (energy && hit)
	{
		energy--;
		std::cout << name << " ClapTrap attacks " << target << ", causing " << damage << " points of damage!\n";
	}
	else if (energy == 0)
		std::cout << name << " ClapTrap is running out of energy\n";
	else if (hit == 0)
		std::cout << name << " ClapTrap is running out of hit points\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > hit)
	{
		hit = 0;
		std::cout << name << " ClapTrap is broken\n";
	}
	else
	{
		hit -= amount;
		std::cout << name << " ClapTrap takes " << amount << " of damage\n";
		std::cout << name << " ClapTrap hits point is " << hit << " \n";
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy && hit)
	{
		if (hit > 0xffffffff - amount)
		{
			amount = 0xffffffff - hit;
			hit = 0xffffffff;
		}
		else
			hit += amount;
		energy--;
		std::cout << name << " ClapTrap recovers " << amount << " hit points\n";
		std::cout << name << " ClapTrap hits point is " << hit << " \n";
	}
	else if (energy == 0)
		std::cout << name << " ClapTrap is running out of energy\n";
	else if (hit == 0)
		std::cout << name << " ClapTrap is running out of hit points\n";
}