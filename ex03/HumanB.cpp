/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:06:27 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:06:31 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* HumanB peut exister sans arme 
- _weapon doit commencer a pointer vers rien (NULL)
- _weapon contiendrait une valeur indefinie (dangereux) */
HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{

}

HumanB::~HumanB()
{

}

/* reçois un Weapon par reference, donc on utilise & pour obtenir son adresse
- donc _weapon devient un pointeur vers l’arme originale, pas une copie
- si on modifie le type de l’arme via setType(), HumanB verra automatiquement la maj */
void	HumanB::setWeapon(Weapon &new_weapon)
{
	_weapon = &new_weapon;
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with their ";
	if (_weapon != NULL)
		std::cout << _weapon->getType();
	else
		std::cout << "*NO WEAPON*";
	std::cout << std::endl;
}