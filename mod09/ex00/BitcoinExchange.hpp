#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <fstream>
#include <map>
#include <string>
#include <stdint.h>

std::string getToken(const std::string& str, char sep, int pos);
bool checkFormatKey(const std::string& str);
bool checkNumber(const std::string& str, bool dotAllowed);

typedef std::map<std::string, int> map;
