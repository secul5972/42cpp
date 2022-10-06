/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:48:50 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 14:47:06 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string name;
	unsigned int hit;
	unsigned int energy;
	unsigned int damage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &clap);
	explicit ClapTrap(std::string name);
	~ClapTrap();

	ClapTrap& operator=(const ClapTrap &clap);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif