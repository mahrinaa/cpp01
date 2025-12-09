/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:05:42 by mapham            #+#    #+#             */
/*   Updated: 2025/12/09 16:05:45 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstream> 

class Sed
{
private:
	std::string		_inputFile;  //nom fichier source
	std::string		_outputFile; //nom fichier .replace
	std::string		_s1; 		 //mot a remplacer
	std::string		_s2; 		 //mot de remplacement

	std::ifstream	_ifs;	//lecture
	std::ofstream 	_ofs; 	//ecriture

	//fonction utilitaire privee: remplace s1 par s2 dans une ligne
	std::string _replaceAll(const std::string &line) const;

public:
	//constructeur: initialise les noms + s1 et s2
	Sed(const std::string &filename, const std::string &s1, const std::string  &s2);
	~Sed();
	
	//Fonction principale : ouvrir fichiers, traiter, ecrire
	int process();
};

#endif