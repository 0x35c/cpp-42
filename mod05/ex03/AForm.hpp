/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 15:20:04 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP_
#define AFORM_HPP_

#include "Bureaucrat.hpp"

class AForm {
	public:
		AForm(void);
		AForm(const AForm& AForm);
		AForm(std::string name, int gradeToExecute, int gradeToSign);
		virtual ~AForm(void);

		AForm&	operator= (const AForm& AForm);

		virtual void	beSigned(Bureaucrat& bureaucrat) = 0;

		/* Public member functions */
		std::string		getName(void) const;
		virtual void	execute(Bureaucrat const& executor) const;
		bool			getIsSigned(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;

	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToExecute;
		const int			_gradeToSign;
};

std::ostream& operator<< (std::ostream& out, const AForm& form);

#endif
