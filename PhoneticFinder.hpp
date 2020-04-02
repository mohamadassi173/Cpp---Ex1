#ifndef PhoneticFinder
#define PhoneticFinder
#include <string>

//from phoneticFinder file
std::string UpperCase(std::string text);
bool checkIfEqual(std::string text, std::string target);
bool checkChar(char a, char b);
std::string UpperCase(std::string text);
namespace phonetic {
	 std::string find(std::string a,std::string b);
};
// 
#endif