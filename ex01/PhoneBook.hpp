/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:05:08 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/20 17:12:50 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

# include 	"Contact.hpp"
# include	<iomanip>

class PhoneBook
{
	private:
	
		Contact	contacts[8];
		int		count;
	
	public:

		PhoneBook();	// Default Constructor
		~PhoneBook();	// Destructor

		// Other methods
		void	addContact(const Contact &newContact);
		int		getContactCount() const;
		const	Contact &getContact(int index) const;
		void	displayContacts() const;
};

#endif // PHONEBOOK_HPP
