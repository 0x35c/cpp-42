/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:00:39 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/17 14:18:09 by ulayus           ###   ########.fr       */
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
		ShrubberyCreationForm(std::string name, int gradeToExecute, int gradeToSign);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm&	operator= (const ShrubberyCreationForm& ShrubberyCreationForm);

	private:
		bool	_isSigned;
};

std::ostream& operator<< (std::ostream& out, const ShrubberyCreationForm& form);

#endif
