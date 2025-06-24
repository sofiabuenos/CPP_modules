#include "SedAlt.hpp"

SedAlt::SedAlt()
{
	return ;
}

SedAlt::~SedAlt()
{
	return ;
}

// SedAlt::SedAlt(std::string inFile, std::string S1, std::string S2) : string1(S1), string2(S2)

bool SedAlt::openInFile(std::string fileName)
{
	std::string	myText;
	this->inFile.open(fileName.c_str());
	if (!this->inFile.good())
	{
		std::cout << "Error opening this->inFile" << std::endl;
		return (false);
	}
	std::cout << "Original file:" << std::endl;
	while (getline(this->inFile, myText))
		std::cout << myText << '\n';
	return (true);
}

bool SedAlt::openOutFile(std::string fileName)
{
	std::string outFileName;

	outFileName = fileName.append(".replace");
	outFile.open(outFileName.c_str());
	if (!outFile.good())
	{
		std::cout << "Error opening outFile" << std::endl;
		return (false);
	}
	return (true);
}
/* While I find the string I'm looking for I:
   - erase the one to be replaced
   - insert the new one
   - update position */
void editLine(std::string &line, const std::string &find, const std::string &replace)
{
	size_t pos = 0;
	while ((pos = line.find(find, pos)) != std::string::npos)
	{
		line.erase(pos, find.length());
		line.insert(pos, replace);
		pos += replace.length();
	}
}

void SedAlt::replace(char** av)
{
	std::string find;
	std::string replace;
	std::string line;

	find = av[2];
	replace = av[3];
	this->inFile.clear(); // to clean errors (including EOF - since we already read the file in openInFile)
	this->inFile.seekg(0, std::ios::beg);
	while (getline(this->inFile, line))
	{
		editLine(line, find, replace);
		this->outFile << line << std::endl;
	}
	inFile.close();
	outFile.close();
}
