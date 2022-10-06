/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 19:58:51 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/05 20:14:10 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain &brain)
{
	*this = brain;
	std::cout << "Brain copy constructor called\n";
}

Brain &Brain::operator=(const Brain &brain)
{
	for(int i=0;i<100;i++)
		ideas[i] = brain.ideas[i];
	return *this;
}

Brain::~Brain()
{
		std::cout << "Brain destructor called\n";
}
