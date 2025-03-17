/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:05:08 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/17 20:03:43 by jpancorb         ###   ########.fr       */
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
		// Default Constructor
		PhoneBook();

		// Copy constructor
		PhoneBook(const PhoneBook &other);

		// Destructor
		~PhoneBook();
		
		// Copy assignment operator
		PhoneBook & operator = (const PhoneBook &other);

		// Other methods
		void	addContact(const Contact &newContact);
		int		getContactCount() const;
		const	Contact &getContact(int index) const;
		void	displayContact() const;
};

#endif // PHONEBOOK_HPP
