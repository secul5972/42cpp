/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:55:02 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/12 11:38:39 by secul5972        ###   ########.fr       */
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
		throw SpanIsFullException();
	else
		vec.push_back(num);
}

int Span::shortestSpan() const
{
	if (vec.size() < 2)
		throw FewNumberException();

	std::vector<int> cp(vec);
	sort(cp.begin(), cp.end());

	std::vector<int> diff;
	for (unsigned int i = 0; i < cp.size() - 1; i++)
		diff.push_back(cp[i + 1] - cp[i]);
	sort(diff.begin(), diff.end());

	return diff[0];
}

int Span::longestSpan() const
{
	if (vec.size() < 2)
		throw FewNumberException();
	return *std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end());
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> tmp(begin, end);

	if (vec.size() + tmp.size() > maxsize)
		throw SpanIsFullException();
	for (unsigned int i = 0; i < tmp.size(); i++)
		vec.push_back(tmp[i]);
}

const char *Span::SpanIsFullException::what() const throw()
{
	return "SpanIsFullException";
}

const char *Span::FewNumberException::what() const throw()
{
	return "FewNumberException";
}