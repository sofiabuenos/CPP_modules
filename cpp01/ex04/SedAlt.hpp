#ifndef SEDALT_HPP
# define SEDALT_HPP

# include <iostream>
# include <fstream>

class SedAlt
{
	private:
		std::ifstream inFile;
		std::ofstream outFile;
	public:
		SedAlt();
		~SedAlt();
		bool openInFile(std::string fileName);
		bool openOutFile(std::string fileName);
		void replace(char** av);
};

#endif