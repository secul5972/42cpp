/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:09:58 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 14:47:34 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(ScavTrap const &scav);
	explicit ScavTrap(std::string newname);
	~ScavTrap();

	ScavTrap& operator = (ScavTrap const &scav);

	virtual void attack(const std::string& target);

	void guardGate();
};

#endif
