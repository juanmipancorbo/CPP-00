/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:11:37 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/20 18:44:51 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"

Contact::Contact()	{}	// Default constructor
Contact::~Contact()	{}	// Destructor

	// Setters & Getters //
	
void		Contact::set_firstName(const std::string &input) { _firstName = input; };
std::string	Contact::get_firstName() const { return _firstName; }

void		Contact::set_lastName(const std::string &input) { _lastName = input; };
std::string	Contact::get_lastName() const { return _lastName; }

void		Contact::set_nickname(const std::string &input) { _nickname = input; };
std::string	Contact::get_nickname() const { return _nickname; }

void		Contact::set_phoneNumber(const std::string &input) { _phoneNumber = input; };
std::string	Contact::get_phoneNumber() const { return _phoneNumber; }

void		Contact::set_darkestSecret(const std::string &input) { _darkestSecret = input; };
std::string	Contact::get_darkestSecret() const { return _darkestSecret; }
