/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:11:40 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/20 18:29:51 by jpancorb         ###   ########.fr       */
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

PhoneBook::PhoneBook() : count(0) {}	// Default Constructor
PhoneBook::~PhoneBook() {}				// Destructor

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
	std::cout << "Total: " << num << std::endl;
}