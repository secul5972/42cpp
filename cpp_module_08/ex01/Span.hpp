/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:55:00 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/12 16:14:38 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int maxsize;
	std::vector<int> vec;
	Span();
public:
	Span(unsigned int _maxsize);
	Span(const Span &span);
	~Span();
	Span &operator=(const Span &span);

	void addNumber(int num);
	int shortestSpan() const;
	int longestSpan() const;

	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class NeedMoreSpaceException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class FewNumberException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};

#endif