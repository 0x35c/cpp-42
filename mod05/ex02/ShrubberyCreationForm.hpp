/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:00:39 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 15:11:11 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator= (const ShrubberyCreationForm& other);

		/* Public member functions */
		void	beSigned(Bureaucrat& bureaucrat);
		void	execute(Bureaucrat const& executor) const;

	private:
		std::string	_target;
		bool		_isSigned;
};

std::ostream& operator<< (std::ostream& out, const ShrubberyCreationForm& form);

#endif
