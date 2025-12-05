/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 21:06:22 by mai               #+#    #+#             */
/*   Updated: 2025/12/05 21:35:14 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

//HumanA utilise une référence car il ne peut pas être créé sans arme,
//et une référence doit être initialisée immédiatement et ne peut pas devenir NULL.

class HumanA
{
private:
	std::string _name;
	Weapon &_weapon; //HumanA oblige d avoir une arme

public:
	HumanA(std::string name, Weapon &weapon); //tjrs arme donc doit recevoir une ref dans le constructeur
	~HumanA();
	void	attack() const; //se contente daffiche _name et _weapon donc doit etre const
};

#endif