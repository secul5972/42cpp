/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:27:41 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/05 19:16:05 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *aa = new WrongAnimal();
	const WrongAnimal *bb = new WrongCat();

	std::cout << aa->getType() << " " << std::endl;
	std::cout << bb->getType() << " " << std::endl;
	aa->makeSound();
	bb->makeSound();

	delete meta;
	delete j;
	delete i;
	delete aa;
	delete bb;

	return 0;
}