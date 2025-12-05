/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 21:21:48 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 21:47:54 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

//HumanB peut être créé sans arme
//peut recevoir une arme plus tard
//l’arme peut changer au cours du temps
//doit attaquer uniquement s’il a une arme
class HumanB
{
private:
	std::string _name; //nom de l humain
	
	//HumanB peut etre desarme donc utilse un pointeur
	//il peut être NULL → HumanB sans arme
	//il peut être changé → HumanB change d’arme
	//il peut pointer vers n’importe quel Weapon existant
	Weapon     *_weapon; 
	
public:
	HumanB(std::string name);
	~HumanB();
	void	attack(void) const; //affiche seulement ne modifie rien donc const

	//ref en param car HumanB doit recevoir une arme existante, pas une copie.
	//l'adresse sera stocker dans _weapon
	void	setWeapon(Weapon &new_weapon);
	
};

#endif