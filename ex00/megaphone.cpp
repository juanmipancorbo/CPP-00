/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpancorb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:31:11 by jpancorb          #+#    #+#             */
/*   Updated: 2025/03/10 20:16:12 by jpancorb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void	strtoupper(char *str)
{
	while(*str)
		std::cout << static_cast<char>(std::toupper(*str++));
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while(--argc)
			strtoupper(*++argv);
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
