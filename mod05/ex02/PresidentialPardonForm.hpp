/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:00:39 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 15:10:49 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <string>

class PresidentialPardonForm: public AForm {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator= (const PresidentialPardonForm& other);

		/* Public member functions */
		void	beSigned(Bureaucrat& bureaucrat);
		void	execute(Bureaucrat const& executor) const;

	private:
		std::string	_target;
		bool		_isSigned;
};

std::ostream& operator<< (std::ostream& out, const PresidentialPardonForm& form);

#endif
