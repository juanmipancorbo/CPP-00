/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:11:37 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/17 17:59:47 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"

// Default constructor
Contact::Contact()
{
	std::cout << "Contact created!" << std::endl;
}

// Copy constructor
Contact::Contact(const  Contact &other)
{
	*this = other;
}

// Destructor
Contact::~Contact()
{
	std::cout << "Contact destroyed!" << std::endl;
}

// Copy assignment operator
Contact &Contact::operator=(const Contact &other)
{
	if (this != &other)
	{
		this->_firstName		= other._firstName;
		this->_lastName			= other._lastName;
		this->_nickname 		= other._nickname;
		this->_phoneNumber		= other._phoneNumber;
		this->_darkestSecret	= other._darkestSecret;
	}
	return *this;
}

// Setters & Getters
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