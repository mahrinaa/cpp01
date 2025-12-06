/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 04:09:31 by mai               #+#    #+#             */
/*   Updated: 2025/12/06 04:25:44 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl		message;
	std::string	levels;

	if (argc != 2)
	{
		std::cout << "Need one paramater, please try again !" << std::endl;
		return (1);
	}
	levels = argv[1];
	if (levels == "DEBUG" || levels == "INFO" || levels == "WARNING" || levels == "ERROR")
		message.complain(levels);
	else
	{
		std::cout << "Enter one: <DEBUG> <INFO> <WARNING> <ERROR>" << std::endl;
	}
	return (0);
}

/* int	main( int argc, char **argv )
{
	Harl	Harl;
	
	if (argc !=  2)
	{
		std::cout << "Need one parameter" << std::endl;
		return (0);
	}
	Harl.complain(av[1]);
	return (0);
} */

/* int main()
{
	Harl harl;

    std::cout << "\n--- DEBUG ---" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n--- INFO ---" << std::endl;
    harl.complain("INFO");

    std::cout << "\n--- WARNING ---" << std::endl;
    harl.complain("WARNING");

    std::cout << "\n--- ERROR ---" << std::endl;
    harl.complain("ERROR");

	//Test d'un niveau inexistant
	std::cout << "\n--- UNKNOWN ---" << std::endl;
	harl.complain("RANDOM");

	return (0);
} */