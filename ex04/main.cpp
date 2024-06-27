#include <cstddef>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cerr << "Invailed args" << std::endl;
		exit(1);
	}
	std::string s1 = argv[1];
	std::string s2 = argv[2];
	std::string fileName = argv[3];
	std::size_t pos = 0;

	std::ifstream inputFile(fileName);
	std::ifstream ifs(fileName, std::ios::binary);
	if (!ifs) {
		std::cerr << "Error: file not found" << std::endl;
		exit(1);
	}
	std::stringstream ss;
	ss << ifs.rdbuf();
	std::string Istr = ss.str();

	fileName += ".replace";
	std::ofstream outputFile(fileName);
	while(true)
	{
		std::size_t tmpPos = Istr.find(s1,pos);
		if(tmpPos == std::string::npos)
		{
			outputFile << Istr.substr(pos) ;
				break;
		}
		size_t size = tmpPos - pos;
		outputFile << Istr.substr(pos,size) ;
		outputFile << s2 ;
		pos = tmpPos + s1.length();
	}
	return(0);
}
