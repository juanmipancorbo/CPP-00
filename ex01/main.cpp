/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:11:42 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/19 21:29:29 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"PhoneBook.hpp"
#include	"Contact.hpp"

static void setContact(PhoneBook &phoneBook)
{
	Contact     newContact;
	std::string input;
	std::string emptyField = "Empty field is not possible.";

	std::cout << "First Name: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty()) 
	{
		std::cout << emptyField << "\nFirst Name: " << std::endl;
		std::getline(std::cin, input);
	}
	newContact.set_firstName(input);

	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty()) 
	{ 
		std::cout << emptyField << "\nLast Name: " << std::endl;
		std::getline(std::cin, input);
	}
	newContact.set_lastName(input);

	std::cout << "Nickname: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty()) 
	{ 
		std::cout << emptyField << "\nNickname: " << std::endl;
		std::getline(std::cin, input);
	}
	newContact.set_nickname(input);

	std::cout << "Phone Number: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty() || input.find_first_not_of("+ 0123456789") != std::string::npos)
	{ 
		std::cout << "Not number or " << emptyField << "\nPhone Number: " << std::endl;
		std::getline(std::cin, input);
	}
	newContact.set_phoneNumber(input);

	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, input);
	while (input.empty()) 
	{ 
		std::cout << emptyField << "\nDarkest Secret: " << std::endl;
		std::getline(std::cin, input);
	}
	newContact.set_darkestSecret(input);

	phoneBook.addContact(newContact);
	std::cout << "New contact added successfully!" << std::endl;
}

static void searchContact(PhoneBook &phoneBook)
{
	std::string indexStr;

	phoneBook.displayContacts();

	std::cout << "Enter index to display: " << std::endl;
	std::getline(std::cin, indexStr);
	int index = std::atoi(indexStr.c_str()); // indexStr to INT
	
	if (index >= 1 && index <= phoneBook.getContactCount()) 
	{
		const Contact &c = phoneBook.getContact(index - 1);
		std::cout << "First Name: " << c.get_firstName() << std::endl;
		std::cout << "Last Name: " << c.get_lastName() << std::endl;
		std::cout << "Nickname: " << c.get_nickname() << std::endl;
		std::cout << "Phone Number: " << c.get_phoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << c.get_darkestSecret() << std::endl;
	}
	else { std::cout << "Invalid index." << std::endl; }
}

int	main()
{
	PhoneBook	phoneBook;
	std::string command;

	std::cout <<	"Wellcome to Felipe PhoneBook!\n"
					"Do you want to \"ADD\" or \"SEARCH\" a contact?\n"
					"You can also \"EXIT\" if you don't know what "
					"are you doing here..." << std::endl;
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH or EXIT): " << std::endl;
		std::getline(std::cin, command);

		if		(command == "ADD")		{ setContact(phoneBook); }
		else if	(command == "SEARCH")	{ searchContact(phoneBook); }
		else if (command == "EXIT")		{ break; }
		else { std::cout << "Unknown command." << std::endl; }
	}
	return 0;
}
