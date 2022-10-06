/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:28:04 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/05 19:04:45 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal")
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout << "Animal copy constructor called\n";
}

Animal &Animal::operator=(const Animal &animal)
{
	type = animal.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

void Animal::makeSound(void) const
{
		std::cout << "The animal type has not been determined\n";
}

const std::string &Animal::getType() const
{
	return type;
}