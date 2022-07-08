/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:11:17 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/08 10:33:40 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name, int _sgrade, int _egrade) : name(_name), issigned(false), sgrade(_sgrade), egrade(_egrade)
{
	std::cout << "Form default constructor called" << "\n";
	if (sgrade < 1 || egrade < 1 )
		throw GradeTooHighException();
	if (sgrade > 150 || egrade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &form) : name(form.name), issigned(form.issigned), sgrade(form.sgrade), egrade(form.egrade)
{
	std::cout << "Form copy constructor called" << "\n";
	if (sgrade < 1 || egrade < 1 )
		throw GradeTooHighException();
	if (sgrade > 150 || egrade > 150)
		throw GradeTooLowException();
}

Form &Form::operator=(const Form &form)
{
	issigned = form.issigned;
	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called" << "\n";
}

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (sgrade >= bureaucrat.getGrade())
		issigned = true;
	else 
		throw Form::GradeTooLowException();
}

const std::string &Form::getName() const
{
	return name;
}

const bool &Form::getIsSigned() const
{
	return issigned;
}

const int &Form::getGrade() const
{
	return sgrade;
}

const int &Form::getGradeRequired() const
{
	return egrade;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException";
}

std::ostream &operator<<(std::ostream &o, const Form &form)
{
	o << "name : " << form.getName() << "\nisSigned : " << form.getIsSigned()
	<< "\ngrade : " << form.getGrade() << "\ngradeRequired : " << form.getGradeRequired()
	<< "\n";
	return o;
}