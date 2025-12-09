/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:07:34 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:07:40 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Chaque zombie est initialise avec un nom vide
Zombie::Zombie() : _name("")
{

}

//Destructeur appele automatiquement N fois lors du delete[]
//Permet de visualiser le cycle de vie de chaque zombie
Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " is destroyed" << std::endl;
}

//Zombie parle
void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

//Renommer chaque zombie
void Zombie::newName(const std::string name)
{
	if (name.empty())
		this->_name = "default_name";
	else
		_name = name;
}