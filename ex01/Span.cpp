/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:55:02 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/12 16:14:22 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int _maxsize) : maxsize(_maxsize) {}

Span::Span(const Span &span) : maxsize(span.maxsize) {}

Span::~Span() {}

Span &Span::operator=(const Span &span)
{
	maxsize = span.maxsize;
	vec = span.vec;
	return *this;
}

void Span::addNumber(int num)
{
	if (vec.size() >= maxsize)
		throw NeedMoreSpaceException();
	else
		vec.push_back(num);
}

int Span::shortestSpan() const
{
	if (vec.size() < 2)
		throw FewNumberException();

	std::vector<int> cp(vec);
	sort(cp.begin(), cp.end());

	int ret = std::numeric_limits<int>::max();
	for (unsigned int i = 0; i < cp.size() - 1; i++)
		ret = std::min(ret, cp[i + 1] - cp[i]);

	return ret;
}

int Span::longestSpan() const
{
	if (vec.size() < 2)
		throw FewNumberException();
	return *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> tmp(begin, end);

	if (vec.size() + tmp.size() > maxsize)
		throw NeedMoreSpaceException();
	for (unsigned int i = 0; i < tmp.size(); i++)
		vec.push_back(tmp[i]);
}

const char *Span::NeedMoreSpaceException::what() const throw()
{
	return "NeedMoreSpaceException";
}

const char *Span::FewNumberException::what() const throw()
{
	return "FewNumberException";
}