/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:10:20 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 15:26:24 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << name << " FragTrap default constructor\n";
}

FragTrap::FragTrap(FragTrap const &frag) : ClapTrap(frag.name)
{
	*this = frag;
	std::cout << name << " FragTrap copy constructor\n";
}

FragTrap::FragTrap(std::string newname) : ClapTrap(newname)
{
	hit = 100;
	energy = 100;
	damage = 30;
	std::cout << name << " FragTrap name constructor\n";
}

FragTrap::~FragTrap()
{
	std::cout << name << " FragTrap destructor\n";
}

FragTrap& FragTrap::operator = (FragTrap const &frag)
{
	name = frag.name;
	hit = frag.hit;
	energy = frag.energy;
	damage = frag.damage;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << name << " FragTrap highFivesGuys\n";
}