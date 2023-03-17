/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/17 14:24:09 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
#include <string>
#include "Bureaucrat.hpp"

class AForm {
	public:
		AForm(void);
		AForm(const AForm& AForm);
		AForm(std::string name);
		~AForm(void);
		AForm&	operator= (const AForm& AForm);

		virtual void	beSigned(Bureaucrat& bureaucrat) const = 0;

		/* Public member functions */
		std::string	getName(void) const;
		bool		getIsSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;

	class GradeTooHighException: std::exception {
		public:
			virtual const char* what() const throw(){
				return ("GradeTooHighException");
			}
	};

	class GradeTooLowException: std::exception {
		public:
			virtual const char* what() const throw(){
				return ("GradeTooLowException");
			}
	};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToExecute;
		const int			_gradeToSign;
};

std::ostream& operator<< (std::ostream& out, const AForm& form);

#endif
