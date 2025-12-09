/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:06:50 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:06:58 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//Constructeur
//_weapon est une ref donc initialisation oblige dans liste initialisation

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) 
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}