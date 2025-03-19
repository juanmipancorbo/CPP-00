/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:01:38 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/19 21:06:43 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CONTACT_HPP
# define 	CONTACT_HPP

# include	<iostream>
# include	<string>
# include	<cstdlib>
# include	<cctype>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
	
	public:
		// Default constructor
		Contact();
		// Copy constructor
		Contact(const Contact &other);
		// Destructor
		~Contact();
		// Copy assignment operator
		Contact & operator = (const Contact &other);

		// Setters & Getters
		void		set_firstName(const std::string &name);
		std::string	get_firstName() const;

		void		set_lastName(const std::string &name);
		std::string	get_lastName() const;

		void		set_nickname(const std::string &name);
		std::string	get_nickname() const;

		void		set_phoneNumber(const std::string &number);
		std::string	get_phoneNumber() const;

		void		set_darkestSecret(const std::string &secret);
		std::string	get_darkestSecret() const;
};

#endif // CONTACT_HPP
