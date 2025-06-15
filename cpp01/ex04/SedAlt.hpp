#ifndef SEDALT_HPP
# define SEDALT_HPP

# include <iostream>

class SedAlt
{
	private:
		std::string fileName;
		std::string string1;
		std::string string2;
	public:
		SedAlt();
		SedAlt(std::string fileName, std::string S1, std::string S2);
		~SedAlt();
		std::string* Replace(std::string str);

};

#endif