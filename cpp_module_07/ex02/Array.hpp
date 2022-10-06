/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:07:27 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 18:31:24 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <iostream>

template <class T>
class Array
{
private:
	T *arr;
	unsigned int length;

public:
	Array() : arr(0), length(0){};
	Array(unsigned int n)
	{
		if (n < 0)
			throw IndexOutOfBound();
		arr = new T[n];
		length = n;
	}
	Array(const Array &array)
	{
		arr = new T[array.length];
		for (unsigned int i = 0; i < array.length; i++)
			arr[i] = array.arr[i];
		length = array.length;
	}
	Array &operator=(const Array &array)
	{
		if (this != array)
		{
			if (array)
				delete arr;
			arr = new T[array.length];
			for (unsigned int i = 0; i < array.length; i++)
				arr[i] = array.arr[i];
			length = array.length;
		}
		return (*this);
	}

	~Array()
	{
		if (arr)
		{
			std::cout << "delete arr called\n";
			delete arr;
		}
		std::cout << "Array destructor called\n";
	}

	T &operator[](unsigned int i)
	{
		if (i >= length || i < 0)
			throw IndexOutOfBound();
		return arr[i];
	}

	class IndexOutOfBound : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "IndexOutOfBound";
		};
	};

	unsigned int size() const
	{
		return length;
	}
};

#endif