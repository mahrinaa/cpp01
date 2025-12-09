/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:07:20 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:07:26 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* On cree N objets Zombie d’un seul coup
- sont stockes sur la heap
- constructeur par defaut (Zombie::Zombie()) est appele N fois
- lfonction recoit un pointeur vers le premier Zombie */

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);

	Zombie *horde = new Zombie[N];

	// Initialisation de chaque zombie
	for (int i = 0; i < N; i++) 
		horde[i].newName(name);
	return (horde);
}