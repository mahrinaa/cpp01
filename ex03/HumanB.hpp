/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:06:21 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:06:23 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

/* HumanB peut être cree sans arme, peut recevoir une arme plus tard
l’arme peut changer au cours du temps
doit attaquer uniquement s’il a une arme */
class HumanB
{
private:
	std::string _name; 
	
/* 	HumanB peut etre desarme donc utilse un pointeur
	il peut être NULL : HumanB sans arme
	il peut être change : HumanB change d’arme
	il peut pointer vers n’importe quel Weapon existant */
	Weapon     *_weapon; 
	
public:
	HumanB(std::string name);
	~HumanB();

	//affiche seulement ne modifie rien donc const
	void	attack(void) const; 

/* 	ref en param car HumanB doit recevoir une arme existante, pas une copie.
	l'adresse sera stockee dans _weapon */
	void	setWeapon(Weapon &new_weapon);
	
};

#endif