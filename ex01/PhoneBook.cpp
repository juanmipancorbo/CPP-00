/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:11:40 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/19 20:30:58 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"PhoneBook.hpp"

// Auxiliar function
static	std::string formatField(const std::string &str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}

// Default Constructor
PhoneBook::PhoneBook() : count(0)
{}

// Copy constructor
PhoneBook::PhoneBook(const PhoneBook &other) : count(other.count)
{
	for (int i = 0; i < 8; i++)
	{
		contacts[i] = other.contacts[i];
	}
}

// Destructor
PhoneBook::~PhoneBook()
{}

// Copy assignment operator
PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	count = other.count;
	for (int i = 0; i < 8; i++)
	{
		contacts[i] = other.contacts[i];
	}
	return *this;
}

// Other methods
void	PhoneBook::addContact(const Contact &newContact)
{
	contacts[count % 8] = newContact;
	count++;
}

int		PhoneBook::getContactCount() const
{
	return (count < 8 ? count : 8);
}

const	Contact &PhoneBook::getContact(int index) const
{
	return contacts[index];
}

void	PhoneBook::displayContacts() const
{
	int num 	= getContactCount();
	std::cout	<< std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nick name" << std::endl;
	std::cout << num << std::endl;
	
	for (int i = 0; i < num; i++)
	{
		std::cout	<< std::setw(10) << i + 1 << "|";
		std::string	firstName	= formatField(contacts[i].get_firstName());
		std::string	lastName 	= formatField(contacts[i].get_lastName());
		std::string	nickName	= formatField(contacts[i].get_nickname());
		std::cout	<< std::setw(10) << firstName << "|"
					<< std::setw(10) << lastName << "|"
					<< std::setw(10) << nickName << std::endl;
	}
}