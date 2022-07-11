/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 09:11:26 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/10 10:52:29 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool issigned;
	const int sgrade;
	const int egrade;

	Form();
public:
	explicit Form(std::string _name, int _sgrade, int _egrade);
	Form(const Form &form);
	Form &operator=(const Form &form);
	virtual ~Form();

	void beSigned(const Bureaucrat &bureaucrat);
	const std::string &getName() const;
	const bool &getIsSigned() const;
	const int &getSgrade() const;
	const int &getEgrade() const;

	virtual void execute(const Bureaucrat &executor) const = 0;

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	
	class AlreadySignedException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class UnSignedException : public std::exception
	{
	public:
		const char *what() const throw();
	};

	class FileIsNotOpenException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &o, const Form &form);
#endif