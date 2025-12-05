/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:31:29 by mai               #+#    #+#             */
/*   Updated: 2025/12/06 00:05:22 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	//recuperation des parametres
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	//creation dun objet Sed
	Sed sed(filename, s1, s2);

	//executer le processus
	if (!sed.process())
	{
		std::cout << "Error: processing failed." << std::endl;
		return (1);
	}
	return (0);
}
