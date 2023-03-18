/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:00:39 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/18 20:05:53 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& ShrubberyCreationForm);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator= (const ShrubberyCreationForm& ShrubberyCreationForm);

		/* Public member functions */
		void	beSigned(Bureaucrat& bureaucrat) const;

	private:
		std::string	_target;
		bool		_isSigned;
};

std::ostream& operator<< (std::ostream& out, const ShrubberyCreationForm& form);

#endif
