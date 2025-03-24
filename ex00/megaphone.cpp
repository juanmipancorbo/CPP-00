/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:31:11 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/24 20:00:32 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void str_to_upper(const std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
		std::cout << static_cast<char>(std::toupper(str[i]));
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while(--argc)
			str_to_upper(*++argv);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
