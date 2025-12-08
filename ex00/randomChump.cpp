/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 02:33:47 by mai               #+#    #+#             */
/*   Updated: 2025/12/08 22:40:10 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie temporaire cree sur la stack (memoire auto) 
annonce immediatement
sera detruit automatiquement a la fin de la fonction */

void randomChump(std::string name)
{
	Zombie tmp(name);
	tmp.announce();
}