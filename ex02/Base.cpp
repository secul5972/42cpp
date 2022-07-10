/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:32:07 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 15:55:53 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class A;
class B;
class C;

Base::~Base() {}

Base *generate()
{
	srand(time(NULL));
	Base *base;

	switch (rand() % 3)
	{
	case 0:
		base = new A;
		std::cout << "A is generated\n";
		break;
	case 1:
		base = new B;
		std::cout << "B is generated\n";
		break;
	case 2:
		base = new C;
		std::cout << "C is generated\n";
		break;
	}
	return (base);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Actual type is A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Actual type is B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Actual type is C\n";
	else
		std::cout << "No Type\n";
}

void identify(Base &p)
{
	try
	{
		A &aa = dynamic_cast<A&>(p);
		(void)aa;
		std::cout << "Actual type is A\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		B &bb = dynamic_cast<B&>(p);
		(void)bb;
		std::cout << "Actual type is B\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		C &cc = dynamic_cast<C&>(p);
		(void)cc;
		std::cout << "Actual type is C\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}