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
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat &cat) : Animal()
{
	type = cat.type;
	brain = new Brain();
	*brain = *(cat.brain);
	std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &cat)
{
	type = cat.type;
	*brain = *(cat.brain);
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "meow!\n";
}