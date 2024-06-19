#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc != 4)
    exit(1);
  std::string fileName;

  std::string s1 = argv[1];
  std::string s2 = argv[2];
  fileName = argv[3];
  fileName += ".replace,";
  std::ifstream inputFile(argv[3]);
  std::ofstream outputFile(fileName);
  std::string line;

  while (std::getline(inputFile, line)) {
	  if(line.find(s1) != string::npos)
	  {
  			std::string newline = line.substr(0, line.find("s1")); 
			newline += s2;
	  }
    outputFile << line << std::endl;
    }
  }
  return 0;
}
