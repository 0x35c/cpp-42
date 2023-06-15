#include "BitcoinExchange.hpp"
#include <cstdlib>

// This function will check the database format 
// which should be as following: yyyy-mm-dd,value
map parseDatabase(std::ifstream& infile) {
	map database;
	std::string line;
	std::string keyToken;
	std::string keyValue;
	static bool firstLine;

	firstLine = true;
	while (std::getline(infile, line))
	{
		if (firstLine == true) {
			if (line != "date,exchange_rate")
				throw std::invalid_argument("Missing format at start of file");
			firstLine = false;
		}
		else {
			keyToken = getToken(line, ',', 1);
			if (!line.empty() && checkFormatKey(keyToken) == false)
				throw std::invalid_argument("Error on the format: " + keyToken);
			keyValue = getToken(line, ',', 2);
			if (!line.empty() && checkNumber(keyValue, true) == false)
				throw std::invalid_argument("Error on the format: " + keyValue);
			database.insert(std::pair<std::string, float>(keyToken, std::atof(keyValue.c_str())));
		}
	}
	return (database);
}

// This function will check the input format 
// which should be as following: date | value
//
// It will then print the date and its value
// or the error message corresponding
void printInput(std::ifstream& infile, map& database) {
	float value;
	std::string str;
	std::string keyToken;
	std::string keySep;
	std::string keyValue;
	static bool firstLine;

	firstLine = true;
	while (std::getline(infile, str))
	{
		if (firstLine == true) {
			if (str != "date | value") {
				std::cerr << "Missing format at start of file" << std::endl;
				return ;
			}
			firstLine = false;
		}
		else {
			keyToken = getToken(str, ' ', 1);
			keySep = getToken(str, ' ', 2);
			keyValue = getToken(str, ' ', 3);
			value = std::atof(keyValue.c_str());
			if (str.empty())
				std::cerr << "Error: empty line" << std::endl;
			else if (checkFormatKey(keyToken) == false)
				std::cerr << "Error on date: " + str << std::endl;
			else if (keyValue.empty())
				std::cerr << "Error: empty value or too many spaces" << std::endl;
			else if (keySep != "|")
				std::cerr << "Error on format: " + str << std::endl;
			else if (checkNumber(keyValue, true) == false)
				std::cerr << "Error on value: " + str << std::endl;
			else if (value > 1000.0)
				std::cerr << "Error: too high value: " << value << std::endl;
			else {
				printDate(database, keyValue, keyToken, value);
			}
		}
	}
}

// Utils function to get a part of a string with its
// following index and a defined separator, it will
// then return the string corresponding to it.
std::string getToken(const std::string& str, char sep, int pos) {
	std::string token;
	int			cur_pos;

	cur_pos = 1;
	for (uint64_t i = 0; i < str.size(); i++) {
		if (str[i] == sep)	{
			if (cur_pos == pos)
				break;
			token.clear();
			cur_pos++;
		}
		else
			token += str[i];
	}
	return (token);
}

static bool checkDay(int day, int month, int year) {
	int	months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ((year % 4 == 0 && year % 100) || year % 400 == 0)
		months[1] = 29;
	if (day > months[month - 1])
		return (false);
	return (true);
}

static bool checkDate(std::string sYear, std::string sMonth, std::string sDay) {
	int year = std::atol(sYear.c_str());
	int month = std::atoi(sMonth.c_str());
	int day = std::atoi(sDay.c_str());

	if (year < 2009 || year > 2050)
		return (false);
	else if (month < 1 || month > 12)
		return (false);
	else if (checkDay(day, month, year) == false)
		return (false);
	return (true);
}

bool checkFormatKey(const std::string& str) {
	std::string year = getToken(str, '-', 1);
	std::string month = getToken(str, '-', 2);
	std::string day = getToken(str, '-', 3);

	if (str.size() != 10)
		return (false);
	if (year.size() != 4 || checkNumber(year, false) == false)
		return (false);
	else if (month.size() != 2 || checkNumber(month, false) == false)
		return (false);
	else if (day.size() != 2 || checkNumber(day, false) == false)
		return (false);
	else if (checkDate(year, month, day) == false)
		return (false);
	return (true);
}

bool checkNumber(const std::string& str, bool dotAllowed) {
	bool isDot;

	if (dotAllowed == true)
		isDot = false;
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == '.' && isDot == false)
			isDot = true;
		else if (std::isdigit(str[i]) == false)
			return (false);
	}
	if (std::atol(str.c_str()) > 2147463647)
		return (false);
	return (true);
}

// This function will print the date and the value between
// the database and the input, or the closest lower date 
// if not found in the database.
void printDate(map& database, std::string keyValue, std::string keyToken, float value) {
	map::iterator tmp;

	if ((tmp = database.find(keyToken)) != database.end()) {
		std::cout << keyToken << " => " << keyValue
		<< " = " << tmp->second * value
		<< std::endl;
	}
	else if ((tmp = database.lower_bound(keyToken)) != database.end()) {
		std::cout << keyToken << " => " << keyValue
		<< " = " << tmp->second * value
		<< std::endl;
	}
	else {
		std::cout << keyToken << " => " << keyValue
		<< " = " << (--(database.end()))->second * value
		<< std::endl;
	}
}
