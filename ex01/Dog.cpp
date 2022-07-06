/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:40:38 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/05 20:15:08 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called\n";
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal()
{
	std::cout << "Dog copy constructor called\n";
	type = dog.type;
	brain = new Brain();
	*brain = *(dog.brain);
}

Dog &Dog::operator=(const Dog &dog)
{
	type = dog.type;
	*brain = *(dog.brain);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "ruff-ruff!\n";
}