/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 01:48:36 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 02:33:39 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//zombie cree sur la heap
//newZombie alloue un zombie sur la heap
//donc la durée de vie n’est pas limitée au scope.
//faut le détruire avec delete
Zombie* newZombie(std::string name)
{
	return new Zombie(name); //alloue le zombie dynamiquement
}