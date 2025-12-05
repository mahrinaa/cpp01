/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 03:20:10 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 04:00:36 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* On crée N objets Zombie d’un seul coup
Ils sont stockés sur la heap
Le constructeur par défaut (Zombie::Zombie()) est appelé N fois
La fonction reçoit un pointeur vers le premier Zombie */
Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N; i++) // initialisation de chaque zombie
		horde[i].setName(name);
	return (horde);
}