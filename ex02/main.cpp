/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:24:57 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 17:09:55 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string	str; //declaration de la string
	std::string* stringPTR; //declaration pointeur

	//initalisation
	str = "HI THIS IS BRAIN";
	stringPTR = &str; //pointer stringPTR sur str
	
	//ref doit etre initialiser direct
	//ref n est pas assignable
	//doit representer un objet
	//ne peut pas etre NULL
	std::string&	stringREF = str; //ref doit etre initialiser direct

	//affichage des address 
	std::cout << "Memory address of the string variable: " << &str 		 << std::endl;
	std::cout << "Memory address held by stringPTR:      " << stringPTR  << std::endl;
	std::cout << "Memory address held by stringREF:      " << &stringREF << std::endl;

	std::cout << "Value of the string variable:  "         << str        << std::endl;
	std::cout << "Value pointed to by stringPTR: "         << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: "         << stringREF  << std::endl;
	return (0);
}