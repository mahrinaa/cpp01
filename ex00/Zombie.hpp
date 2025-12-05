/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 00:19:08 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 01:33:57 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie 
{
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie();
	
	void announce(void) const;
};
//prototype fonctions externes
Zombie* newZombie(std::string name); //heap, zombie doit etre delete
void	randomChump(std::string name); //stack puis zombie detruit automatiquement

#endif