#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <fstream>
#include <map>
#include <string>
#include <stdint.h>

#define DB_PATH "./data.csv"
typedef std::map<std::string, float> map;

typedef struct s_date {
	int year;
	int month;
	int day;
}	t_date;

std::string getToken(const std::string& str, char sep, int pos);
bool checkFormatKey(const std::string& str);
bool checkNumber(const std::string& str, bool dotAllowed);
void printDate(map& database, std::string keyValue, std::string keyToken, float value);
