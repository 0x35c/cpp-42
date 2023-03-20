/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:00:39 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/20 13:55:11 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm: public AForm {
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& RobotomyRequestForm);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator= (const RobotomyRequestForm& RobotomyRequestForm);

		/* Public member functions */
		void	beSigned(Bureaucrat& bureaucrat);
		void	execute(Bureaucrat const& executor) const;

	private:
		std::string	_target;
		bool		_isSigned;
};

std::ostream& operator<< (std::ostream& out, const RobotomyRequestForm& form);

#endif
