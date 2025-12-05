/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 22:53:22 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 23:05:52 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//HumanB peut exister sans arme 
//→ donc _weapon doit commencer à pointer vers rien (NULL)
//sinon _weapon contiendrait une valeur indéfinie (dangereux)
HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{

}

HumanB::~HumanB()
{

}

//reçois un Weapon par référence, donc on utilises & pour obtenir son adresse.
//ce qui fait de _weapon un pointeur vers l’arme originale, pas une copie.
//Si on modifie le type de l’arme via setType(), HumanB verra automatiquement la mise à jour
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