/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:13:27 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/29 11:59:43 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->value = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
