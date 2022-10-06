/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:13:27 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/29 12:38:42 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const int val)
{
	this->value = val << this->frac;
}

Fixed::Fixed(const float val)
{
	this->value = (int)roundf(val * (1 << this->frac));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->value = fixed.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &fixed)
{
	return (this->value > fixed.value);
}

bool Fixed::operator<(const Fixed &fixed)
{
	return (this->value < fixed.value);
}

bool Fixed::operator>=(const Fixed &fixed)
{
	return (this->value >= fixed.value);
}

bool Fixed::operator<=(const Fixed &fixed)
{
	return (this->value <= fixed.value);
}

bool Fixed::operator==(const Fixed &fixed)
{
	return (this->value == fixed.value);
}

bool Fixed::operator!=(const Fixed &fixed)
{
	return (this->value != fixed.value);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed)
{
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed)
{
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed)
{
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed Fixed::operator++(void)
{
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);

	this->value++;
	return old;
}

Fixed Fixed::operator--(void)
{
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);

	this->value--;
	return old;
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

Fixed::~Fixed() {}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return f1;
	return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() < f2.toFloat())
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return f1;
	return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.toFloat() > f2.toFloat())
		return f1;
	return f2;
}

std::ostream &operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return o;
}
