/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 14:09:58 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/03 15:24:35 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(FragTrap const &scav);
	explicit FragTrap(std::string newname);
	~FragTrap();

	FragTrap& operator = (FragTrap const &scav);

	void highFivesGuys();
};

#endif
