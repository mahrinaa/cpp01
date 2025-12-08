/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 01:48:36 by mai               #+#    #+#             */
/*   Updated: 2025/12/08 22:39:47 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie cree sur la heap (memoire dynamique controle manuellement)
retourne un pointeur
newZombie alloue un zombie sur la heap
donc la durée de vie n’est pas limitée au scope.
faut le detruire avec delete */

Zombie* newZombie(std::string name)
{
	return new Zombie(name); //alloue le zombie dynamiquement
}