/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:29:47 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/12 16:34:44 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <string>

int main()
{
	std::cout << "------------------------------------------------\n";
	std::cout << "original\n";

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << "------------------------------------------------\n";
	std::cout << "copy constructor\n";

	MutantStack<int> cs(mstack);

	it = cs.begin();
	ite = cs.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "------------------------------------------------\n";
	std::cout << "assign operator\n";

	MutantStack<int> aos = mstack;

	it = aos.begin();
	ite = aos.end();
	
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "------------------------------------------------\n";
	std::cout << "const_iterator\n";

	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::const_iterator cite = mstack.end();
	
	++cit;
	--cit;
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		++cit;
	}

	std::cout << "------------------------------------------------\n";
	std::cout << "reverse_iterator\n";

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	
	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "------------------------------------------------\n";
	std::cout << "const_reverse_iterator\n";

	MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.rend();
	
	++crit;
	--crit;
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}

	std::cout << "------------------------------------------------\n";
	std::cout << "list\n";
	
	std::list<int> mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << mlist.back() << std::endl;

	mlist.pop_back();

	std::cout << mlist.size() << std::endl;

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::list<int>::iterator lit = mlist.begin();
	std::list<int>::iterator lite = mlist.end();
	
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	std::list<int> ls(mlist);

	std::cout << "------------------------------------------------\n";
	std::cout << "string stack\n";
	
	MutantStack<std::string> strs;

	strs.push("one");
	strs.push("two");
	strs.push("three");
	strs.push("four");

	MutantStack<std::string>::iterator sit = strs.begin();
	MutantStack<std::string>::iterator site = strs.end();

	++sit;
	--sit;
	while (sit != site)
	{
		std::cout << *sit << std::endl;
		++sit;
	}

	std::cout << "\nafter pop\n\n";
	strs.pop();
	sit = strs.begin();
	site = strs.end();
	++sit;
	--sit;
	while (sit != site)
	{
		std::cout << *sit << std::endl;
		++sit;
	}
	return 0;
}