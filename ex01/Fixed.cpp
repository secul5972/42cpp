/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:13:27 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/29 11:59:27 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called\n";
	this->value = val << this->frac;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called\n";
	this->value = (int)roundf(val * (1 << this->frac));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->value = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (1 << this->frac);
}
int Fixed::toInt(void) const
{
	return (int)roundf((float)this->value / (1 << this->frac));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return o;
}