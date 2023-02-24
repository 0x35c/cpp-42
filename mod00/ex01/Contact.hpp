/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulayus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:20:37 by ulayus            #+#    #+#             */
/*   Updated: 2023/02/24 15:34:44 by ulayus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();

	void	Add(void);
	void	PrintContactList(int index);
	void	PrintContact(void);
	bool	added;
	
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
};

#endif
