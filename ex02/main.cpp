/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:24:57 by mai               #+#    #+#             */
/*   Updated: 2025/12/08 22:42:40 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string	str; 		//Declaration de la string
	std::string* stringPTR; //Declaration pointeur

	//Initalisation
	str = "HI THIS IS BRAIN";
	stringPTR = &str; 		//pointer stringPTR sur str
	
/* 	ref doit etre initialiser direct, ref n est pas assignable
	doit representer un objet, ne peut pas etre NULL */
	std::string&	stringREF = str; 

	//affichage des address 
	std::cout << "Memory address of the string variable: " << &str 		 << std::endl;
	std::cout << "Memory address held by stringPTR:      " << stringPTR  << std::endl;
	std::cout << "Memory address held by stringREF:      " << &stringREF << std::endl;

	std::cout << "Value of the string variable:  "         << str        << std::endl;
	std::cout << "Value pointed to by stringPTR: "         << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: "         << stringREF  << std::endl;
	return (0);
}