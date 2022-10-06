/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:05:40 by seungcoh          #+#    #+#             */
/*   Updated: 2022/06/29 12:38:51 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int frac = 8;

public:
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed &copy);

	Fixed &operator=(const Fixed &fixed);
	bool operator>(const Fixed &fixed);
	bool operator<(const Fixed &fixed);
	bool operator>=(const Fixed &fixed);
	bool operator<=(const Fixed &fixed);
	bool operator==(const Fixed &fixed);
	bool operator!=(const Fixed &fixed);

	Fixed operator+(const Fixed &fixed);
	Fixed operator-(const Fixed &fixed);
	Fixed operator*(const Fixed &fixed);
	Fixed operator/(const Fixed &fixed);

	Fixed operator++(void);
	Fixed operator++(int);
	Fixed operator--(void);
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(const Fixed &f1, const Fixed &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(const Fixed &f1, const Fixed &f2);
	
	~Fixed();
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif