/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:40:38 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/05 19:05:07 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog &dog) : Animal()
{
	*this = dog;
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &dog)
{
	type = dog.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "ruff-ruff!\n";
}