/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:27:41 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/05 20:56:37 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *animals[10];
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << " : ";
		animals[i] = new Cat();
		std::cout << '\n';
	}

	for (int i = 5; i < 10; i++)
	{
		std::cout << i << " : ";
		animals[i] = new Dog();
		std::cout << '\n';
	}

	animals[0]->makeSound();
	animals[6]->makeSound();
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " : ";
		delete animals[i];
		std::cout << '\n';
	}


	//Animal *aa = new Animal();
	//aa->makeSound();
}