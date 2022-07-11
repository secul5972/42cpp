/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:17:55 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/09 20:04:08 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name), grade(_grade)
{
	std::cout << "Bureaucrat default constructor called" << "\n";
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade)
{
	std::cout << "Bureaucrat copy constructor called" << "\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
	grade = bureaucrat.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << "\n";
}

const std::string &Bureaucrat::getName() const
{
	return name;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::upGrade()
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::downGrade()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << name << " couldn't sign " << form.getName() << " because " << e.what() << "\n";
	}
	
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << name << " " << e.what() << " : execute fail\n";
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat)
{
	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << '\n';
	return o;
}