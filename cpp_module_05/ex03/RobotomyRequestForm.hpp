/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: secul5972 <secul5972@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 19:46:26 by secul5972         #+#    #+#             */
/*   Updated: 2022/07/09 20:08:21 by secul5972        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
	std::string target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &robotomyrequestform);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator = (const RobotomyRequestForm &robotomyrequestform);

	virtual void execute(Bureaucrat const &bureaucrat) const;
};

#endif