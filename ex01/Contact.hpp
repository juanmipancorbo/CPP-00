/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:01:38 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/13 20:07:46 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONTACT_HPP
# define 	CONTACT_HPP

#include	<string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
	
	public:
		Contact();
		Contact(const Contact &other);
		Contact &operator=(const Contact &other);
		~Contact();

		void		set_firstName(std::string);
		std::string	get_firstName(void) const;

		void		set_lastName(std::string);
		std::string	get_lastName(void) const;

		void		set_nickname(std::string);
		std::string	get_nickname(void) const;

		void		set_phoneNumber(std::string);
		std::string	get_phoneNumber(void) const;

		void		set_darkestSecret(std::string);
		std::string	get_darkestSecret(void) const;
};

#endif // CONTACT_HPP