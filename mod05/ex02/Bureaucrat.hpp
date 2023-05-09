/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/05/09 13:49:41 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <string>

class AForm;

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& Bureaucrat);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);

		Bureaucrat&	operator= (const Bureaucrat& Bureaucrat);

		/* Public member functions */
		void		signForm(AForm& AForm);
		void		execute(AForm const& AForm);
		int			getGrade(void) const;
		std::string	getName(void) const;
		void		incGrade(void);
		void		decGrade(void);

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
		int					_grade;
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat);

#endif
