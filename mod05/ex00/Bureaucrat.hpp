/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:47:23 by ulayus            #+#    #+#             */
/*   Updated: 2023/03/16 16:07:09 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <string>

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& Bureaucrat);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);

		Bureaucrat&	operator= (const Bureaucrat& Bureaucrat);

		/* Public member functions */
		int			getGrade(void) const;
		std::string	getName(void) const;
		void		incGrade(void);
		void		decGrade(void);

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
		int					_grade;
};

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat);

#endif
