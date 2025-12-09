/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:08:07 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:08:10 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie cree sur la heap, retourne un pointeur
- newZombie alloue un zombie sur la heap
- donc la duree de vie n’est pas limitee au scope.
- faut le detruire avec delete */

Zombie* newZombie(std::string name)
{
	//new alloue le zombie dynamiquement
	return new Zombie(name); 
}