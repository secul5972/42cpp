/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungcoh <seungcoh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 14:08:50 by seungcoh          #+#    #+#             */
/*   Updated: 2022/05/07 17:04:43 by seungcoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	name = "";
}
Zombie::Zombie(std::string name)
{
	this->name = name;
}
Zombie::~Zombie(void)
{
	std::cout << name <<" is dead\n";
}
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";    
}
void Zombie::setname(std::string name)
{
	this->name = name;
}
