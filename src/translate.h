#include <iostream>
#include <vector>

/////////////////////////////
// TRANSLATION CLASS
/////////////////////////////

class Translation {
	public:
		Translation(std::string sym, std::string eng, std::string snd);
		std::string english;
		std::string symbol;
		std::string sound;
};

extern std::vector<Translation> translations;
