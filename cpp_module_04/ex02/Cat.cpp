/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:40:38 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/05 20:14:48 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called\n";
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal()
{
	std::cout << "Cat copy constructor called\n";
	type = cat.type;
	brain = new Brain();
	*brain = *(cat.brain);
}

Cat &Cat::operator=(const Cat &cat)
{
	type = cat.type;
	*brain = *(cat.brain);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "meow!\n";
}