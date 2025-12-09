/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:08:02 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:08:04 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie temporaire cree sur la stack (memoire auto) 
- annonce immediatement
- sera detruit automatiquement a la fin de la fonction */

void randomChump(std::string name)
{
	Zombie tmp(name);
	tmp.announce();
}