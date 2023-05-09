/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 15:18:45 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern {
	public:
		Intern(void);
		Intern(const Intern& Intern);
		~Intern(void);

		Intern&	operator= (const Intern& Intern);

		/* Public member functions */
		AForm*	makeForm(std::string name, std::string target) const;
};

#endif
