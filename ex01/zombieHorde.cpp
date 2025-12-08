/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 03:20:10 by mai               #+#    #+#             */
/*   Updated: 2025/12/08 22:41:23 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* On cree N objets Zombie d’un seul coup
Ils sont stockés sur la heap
Le constructeur par défaut (Zombie::Zombie()) est appele N fois
La fonction reçoit un pointeur vers le premier Zombie */

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++) // initialisation de chaque zombie
		horde[i].newName(name);
	return (horde);
}