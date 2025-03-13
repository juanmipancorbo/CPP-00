/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:11:42 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/13 20:07:48 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	"PhoneBook.hpp"
#include	"Contact.hpp"

int	main()
{
	std::cout <<	"Wellcome to Felipe PhoneBook!\n"
					"Do you want to \"ADD\" or \"SEARCH\" a contact?"
					"You can also \"EXIT\" if you don't know what are you doing here..."
					"Enter one of this three commands." << std::endl;

	while (command != "EXIT")
	{
		if (command == "ADD")
			//add contact
		else if (command == "SEARCH")
			//search contact
		else
			continue;
	}
	return 0;
}