/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 03:27:46 by mai               #+#    #+#             */
/*   Updated: 2025/12/06 03:59:57 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese";
	std::cout << "-triple-pickle-special-ketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn’t put enough bacon in my burger! If you did,";
	std::cout << "I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << "I’ve been coming for years, whereas you started working here just last month.";
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string param[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//tableau de string, tableau de pointeurs sur fonctions membres
	//definir les niveaux possibles
	void		(Harl::*level_ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	//chercher le bon niveau avec une boucle
	//compare level avec param[i]
	for (int i = 0; i < 4; i++)
	{
		if (level == param[i])
		{
			(this->*level_ptr[i])();
			return ;
		}
	}
	std::cout << "Undefined complaint level." << std::endl;
}