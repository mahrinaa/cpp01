/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 20:31:40 by mai               #+#    #+#             */
/*   Updated: 2025/12/08 22:47:51 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

/* La classe Weapon represente une arme possedant un type.
Les humains ne possèdent PAS une copie du type, ils utilisent celui-ci directement. */
class Weapon
{
private:
	// Type de l'arme. Modifiable à tout moment via setType().
	std::string _type;

public:
	// Constructeur par défaut : l'arme peut etre cree vide puis configuree ensuite.
	Weapon(std::string type);
	~Weapon();
	
/* 	methode doit renvoyer une ref constante et non une copie
	evite une copie inutile(performance)
	empecher la modif de l arme via get type
	l/appelant ne peut pas modifier _type */
	const std::string& getType() const; 

	// setType modifie _type (l'arme)
	//ce qui met automatiquement à jour l’arme que possèdent HumanA et HumanB.
	void	setType(std::string type); 
};

#endif