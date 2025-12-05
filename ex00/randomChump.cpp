/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 02:33:47 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 03:24:44 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//zombie temporaire cree sur la stack (memoire auto) 
//annonce immediatement
//sera detruit automatiquement a la fin de la fonction
void randomChump(std::string name)
{
	Zombie tmp(name);
	tmp.announce();
}