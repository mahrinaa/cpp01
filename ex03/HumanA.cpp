/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 22:43:44 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 22:51:42 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//constructor
//_weapon est une ref donc initialisation oblige dans liste initialisation

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) 
{

}

//destructor
HumanA::~HumanA()
{

}
//methode
void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}