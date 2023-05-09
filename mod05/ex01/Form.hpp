/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 13:40:03 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP_
# define FORM_HPP_

#include <string>
#include "Bureaucrat.hpp"

class Form {
	public:
		Form(void);
		Form(const Form& Form);
		Form(std::string name, int gradeToExecute, int gradeToSign);
		~Form(void);
		Form& operator= (const Form& Form);

		/* Public member functions */
		std::string getName(void) const;
		bool getIsSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		void beSigned(Bureaucrat& bureaucrat);

	class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
	};

	private:
		const std::string _name;
		const int _gradeToExecute;
		const int _gradeToSign;
		bool _isSigned;
};

std::ostream& operator<< (std::ostream& out, const Form& form);

#endif
