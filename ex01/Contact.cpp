/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:11:37 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/20 17:30:46 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"

Contact::Contact()	{}	// Default constructor
Contact::~Contact()	{}	// Destructor

	// Setters & Getters //
	
void		Contact::set_firstName(const std::string &name) { _firstName = name; };
std::string	Contact::get_firstName() const { return _firstName; }

void		Contact::set_lastName(const std::string &name) { _lastName = name; };
std::string	Contact::get_lastName() const { return _lastName; }

void		Contact::set_nickname(const std::string &name) { _nickname = name; };
std::string	Contact::get_nickname() const { return _nickname; }

void		Contact::set_phoneNumber(const std::string &number) { _phoneNumber = number; };
std::string	Contact::get_phoneNumber() const { return _phoneNumber; }

void		Contact::set_darkestSecret(const std::string &secret) { _darkestSecret = secret; };
std::string	Contact::get_darkestSecret() const { return _darkestSecret; }
