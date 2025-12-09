/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:05:56 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:05:59 by mapham           ###   ########.fr       */
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
