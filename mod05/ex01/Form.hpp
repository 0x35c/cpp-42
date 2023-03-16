/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 17:00:46 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FORM_HPP
# define FORM_HPP
#include <string>
#include "Bureaucrat.hpp"

class Form {
	public:
		Form(void);
		Form(const Form& Form);
		Form(std::string name, int gradeToExecute, int gradeToSign);
		~Form(void);
		Form&	operator= (const Form& Form);

		/* Public member functions */
		void		beSigned(Bureaucrat& bureaucrat);
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

std::ostream& operator<< (std::ostream& out, const Form& form);

#endif
