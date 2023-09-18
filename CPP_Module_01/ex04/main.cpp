/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:04:34 by mghalmi           #+#    #+#             */
/*   Updated: 2023/09/18 14:36:02 by mghalmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceAll(std::string& str, const std::string& s1, const std::string& s2)
{
    size_t startPos = 0;
    size_t foundPos;
    const size_t s1Length = s1.length();
    std::string result;

    while ((foundPos = str.find(s1, startPos)) != std::string::npos)
    {
        result.append(str, startPos, foundPos - startPos);
        result.append(s2);
        startPos = foundPos + s1Length;
    }
    result.append(str, startPos, str.length() - startPos);
    str = result;
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    const std::string inputFileName = argv[1];
    const std::string s1 = argv[2];
    const std::string s2 = argv[3];
    std::string outputFileName = std::string(inputFileName) + ".replace";

    std::ifstream inputFile(inputFileName);
    if (s1.empty()) 
    {
        std::cerr << "Error: Cannot replace an empty string with another string." << std::endl;
        return (0);
    }
    if (!inputFile)
    {
        std::cerr << "Error: Cannot open input file " << inputFileName << std::endl;
        return (0);
    }

    std::ofstream outputFile(outputFileName);
    if (!outputFile)
    {
        std::cerr << "Error: Cannot create output file " << outputFileName << std::endl;
        return (0);
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        replaceAll(line, s1, s2);
        outputFile << line << std::endl;
    }
    std::cout << "File " << inputFileName << " has been processed, and the result is saved in " << outputFileName << std::endl;

    inputFile.close();
    outputFile.close();
    return (0);
}