/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:39:45 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 16:07:41 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat	mbabo("mbabo", 150);
	Bureaucrat	adamiens("adamiens", 1);

	try
	{
		mbabo.decGrade();
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << mbabo;
	try
	{
		adamiens.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << adamiens;
	try
	{
		adamiens.decGrade();
	}
	catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << adamiens;
	try
	{
		mbabo.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << e.what() << std::endl;	
	}
	std::cout << mbabo;
	return (0);
}
