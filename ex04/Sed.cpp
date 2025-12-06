/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mai <mai@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 23:53:24 by mai               #+#    #+#             */
/*   Updated: 2025/12/06 03:11:04 by mai              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

// --------------------------------------------------------------
// Constructor : store parameters and prepare output filename
// --------------------------------------------------------------
Sed::Sed(const std::string &filename, const std::string &s1, const std::string &s2)
    : _inputFile(filename), _s1(s1), _s2(s2)
{
    _outputFile = filename + ".replace";
}

// --------------------------------------------------------------
// Destructor : just close streams if needed
// --------------------------------------------------------------
Sed::~Sed()
{
    if (_ifs.is_open())
        _ifs.close();
    if (_ofs.is_open())
        _ofs.close();
}

// --------------------------------------------------------------
// PRIVATE : replace all occurrences of s1 by s2 in one line
// --------------------------------------------------------------
std::string Sed::_replaceAll(const std::string &line) const
{
    std::string result;
    std::size_t pos = 0;
    std::size_t found;

    while ((found = line.find(_s1, pos)) != std::string::npos)
    {
        result.append(line, pos, found - pos); // copy before s1
        result.append(_s2);                    // replace s1 → s2
        pos = found + _s1.length();            // move forward
    }

    result.append(line, pos); // append the end of line
    return (result);
}

// --------------------------------------------------------------
// PUBLIC : Process the file
// --------------------------------------------------------------
int Sed::process()
{
    // Error: s1 empty → infinite loop
    if (_s1.empty())
    {
        std::cout << "Error: s1 cannot be empty.\n";
        return 0;
    }

    // Try to open input file
    _ifs.open(_inputFile.c_str());
    if (!_ifs.is_open())
    {
        std::cout << "Error: cannot open input file: " << _inputFile << "\n";
        return (0);
    }

    // Try to open output file
    _ofs.open(_outputFile.c_str());
    if (!_ofs.is_open())
    {
        std::cout << "Error: cannot create output file: " << _outputFile << "\n";
        return 0;
    }

    // Read input file line by line, replace, write
    std::string line;
    while (std::getline(_ifs, line))
    {
        _ofs << _replaceAll(line);

        // Add newline except after last line
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
