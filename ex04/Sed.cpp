/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:53:24 by mai               #+#    #+#             */
/*   Updated: 2025/12/08 22:52:42 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"


Sed::Sed(const std::string &filename, const std::string &s1, const std::string &s2)
    : _inputFile(filename), _s1(s1), _s2(s2)
{
    _outputFile = filename + ".replace";
}

Sed::~Sed()
{
    if (_ifs.is_open())
        _ifs.close();
    if (_ofs.is_open())
        _ofs.close();
}

//Remplace s1 par s2
std::string Sed::_replaceAll(const std::string &line) const
{
    std::string result;
    std::size_t pos = 0;
    std::size_t found;

    while ((found = line.find(_s1, pos)) != std::string::npos)
    {
        result.append(line, pos, found - pos); // copie avant s1
        result.append(_s2);                    // remplace s1 par s2
        pos = found + _s1.length();            // avance de pos
    }

    result.append(line, pos);
    return (result);
}


int Sed::process()
{
    // Erreur si s1 vide
    if (_s1.empty())
    {
        std::cout << "Error: s1 cannot be empty.\n";
        return 0;
    }

	//input file
    _ifs.open(_inputFile.c_str());
    if (!_ifs.is_open())
    {
        std::cout << "Error: cannot open input file: " << _inputFile << "\n";
        return (0);
    }

    //output file
    _ofs.open(_outputFile.c_str());
    if (!_ofs.is_open())
    {
        std::cout << "Error: cannot create output file: " << _outputFile << "\n";
        return 0;
    }

    //Lire le fichier ligne par ligne, remplace et write
    std::string line;
    while (std::getline(_ifs, line))
    {
        _ofs << _replaceAll(line);

        //Ajoute une newline except la derniere ligne
        if (!_ifs.eof())
            _ofs << '\n';
    }

    if (_ofs.fail())
    {
        std::cout << "Error: failed writing to output file.\n";
        return (0);
    }

    return (1);
}
